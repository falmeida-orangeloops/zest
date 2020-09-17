#include "headers/Zest.h"

#include <algorithm>
#include <ctime>
#include <QApplication>
#include <QCheckBox>
#include <QCloseEvent>
#include <QDir>
#include <QDebug>
#include <QLabel>
#include <QLineEdit>
#include <QListWidget>
#include <QMessageBox>
#include <QPushButton>
#include <QMediaPlayer>
#include <QMediaPlaylist>
#include <QProcess>
#include <QScreen>
#include <QSettings>
#include <QVBoxLayout>
#include "headers/PreferencesDialog.h"

Zest::Zest(QWidget *parent) : QDialog(parent)
{
    setupUi(this);
    
    QSettings settings("settings", QSettings::NativeFormat);
    
	imageWidget->setPixmap(QPixmap("default.png"));
	playButton->setEnabled(false);
	
    move(QGuiApplication::screens().first()->geometry().center() - this->rect().center());
    
	setWindowTitle(settings.value("window_title").toString());
	
    connect(listWidget, SIGNAL(itemSelectionChanged()), this, SLOT(showImageForCurrentGame()));
	connect(listWidget, SIGNAL(itemDoubleClicked(QListWidgetItem*)), this, SLOT(play()));
	connect(playButton, SIGNAL(clicked()), this, SLOT(play()));
    connect(preferencesButton, SIGNAL(clicked()), this, SLOT(showPreferencesDialog()));
    connect(searchBox, SIGNAL(textChanged(QString)), this, SLOT(filter(QString)));
    
	loadRoms();
    
    musicPlayer = new QMediaPlayer;
    musicPlayer->setVolume(50);
    
    loadMusic();
}

void Zest::filter(QString text) {
    for (int i = 0; i < listWidget->count(); i++) {
        QListWidgetItem *item = listWidget->item(i);
        QString name = item->text();
        item->setHidden(!name.contains(text, Qt::CaseInsensitive));
    }
	
	playButton->setEnabled(false);
}

void Zest::loadMusic() {
    QSettings settings("settings", QSettings::NativeFormat);
    
    if (!settings.value("play_music", true).toBool()) {
        musicPlayer->stop();
        return;
    }
    
    QString musicDirectory = settings.value("music_directory", "music").toString();
    
    QMediaPlaylist *playlist = new QMediaPlaylist;
    QStringList musicFilenames = QDir(musicDirectory).entryList(QDir::Files, QDir::Name);
    
    std::srand(unsigned(std::time(0)));
    std::random_shuffle(musicFilenames.begin(), musicFilenames.end());
    
    for (int i = 0; i < musicFilenames.size(); i++)
        playlist->addMedia(QUrl::fromLocalFile(QFileInfo(musicDirectory + "/" + musicFilenames[i]).absoluteFilePath()));
    
    musicPlayer->setPlaylist(playlist);
    musicPlayer->play();
}


void Zest::loadRoms() {
    listWidget->clear();
    
    QSettings settings("settings", QSettings::NativeFormat);
    QString romsDirectory = settings.value("roms_directory", "roms").toString();
    
    romFilenames = QDir(romsDirectory).entryList(QDir::Files, QDir::Name);
    
    for (int i = 0; i < romFilenames.size(); i++)
        listWidget->addItem(romFilenames[i].chopped(4));
}

void Zest::play() {
    QSettings settings("settings", QSettings::NativeFormat);
    QString romsDirectory = settings.value("roms_directory", "roms").toString();
    QString romFilename = romsDirectory + "/" + romFilenames[listWidget->currentRow()];
    QString emulator = settings.value("emulator").toString();
    
    if (emulator.isEmpty()) {
        QMessageBox messageBox(QMessageBox::Critical, "Set up an emulator", "You need to specify an emulator in the settings file.", QMessageBox::Ok, this);
        messageBox.exec();
        return;
    }
    
    musicPlayer->pause();
    
    bool fullScreen = settings.value("full_screen", true).toBool();
    QString fullScreenParameter = settings.value(fullScreen ? "full_screen_parameter" : "window_mode_parameter").toString();
    QStringList otherParameters = settings.value("other_parameters").toString().split(" ", Qt::SkipEmptyParts);
    
    QStringList parameters;
    parameters.append(fullScreenParameter);
    parameters.append(otherParameters);
    parameters.append(romFilename);
    
    int exitCode = QProcess::execute(emulator, parameters);
    
    if (exitCode != 0) {
        QMessageBox messageBox(QMessageBox::Critical, "Error", "There was a problem when running the game. Please check your emulator preferences.", QMessageBox::Ok, this);
        messageBox.exec();
    }
    
    bool resumeMusic = settings.value("resume_music_when_game_exited", true).toBool();
    
    if (resumeMusic)
        musicPlayer->play();
}

void Zest::showImageForCurrentGame() {
    playButton->setEnabled(true);
    
    QSettings settings("settings", QSettings::NativeFormat);
    QString imagesDirectory = settings.value("images_directory", "images").toString();
    
	QString name = listWidget->currentItem()->text();
    QString imageFilename = imagesDirectory + "/" + name + ".bmp";
    
    if (QFile::exists(imageFilename))
        imageWidget->setPixmap(QPixmap(imageFilename).scaledToHeight(224));
    
    else
        imageWidget->setPixmap(QIcon::fromTheme("action-unavailable-symbolic").pixmap(64, QIcon::Disabled));
}

void Zest::showPreferencesDialog() {
    PreferencesDialog dialog(this);
    dialog.exec();
    
    if (dialog.imagesDirectoryChanged)
        showImageForCurrentGame();
    
    if (dialog.musicPreferencesChanged)
        loadMusic();
    
    if (dialog.romsDirectoryChanged) {
        searchBox->clear();
        loadRoms();
    }
}
