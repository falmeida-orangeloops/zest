#include "headers/PreferencesDialog.h"

#include <QCheckBox>
#include <QSettings>
#include <QHBoxLayout>
#include <QLabel>
#include <QLineEdit>
#include <QPushButton>
#include <QVBoxLayout>

PreferencesDialog::PreferencesDialog(QWidget *parent): QDialog(parent) {
    setupUi(this);
    
    loadPreferences();
    
    resumeMusicCheckBox->setEnabled(playMusicCheckBox->isChecked());
    
    connect(imagesDirectoryLineEdit, SIGNAL(textChanged(QString)), this, SLOT(enableImagesDirectoryChangedBool()));
    connect(musicDirectoryLineEdit, SIGNAL(textChanged(QString)), this, SLOT(enableMusicPreferencesChangedBool()));
    connect(playMusicCheckBox, SIGNAL(toggled(bool)), this, SLOT(enableMusicPreferencesChangedBool()));
    connect(resumeMusicCheckBox, SIGNAL(toggled(bool)), this, SLOT(enableMusicPreferencesChangedBool()));
    connect(romsDirectoryLineEdit, SIGNAL(textChanged(QString)), this, SLOT(enableRomsDirectoryChangedBool()));
    connect(saveButton, SIGNAL(clicked()), this, SLOT(saveAndClose()));
    
    imagesDirectoryChanged = false;
    musicPreferencesChanged = false;
    romsDirectoryChanged = false;
}

void PreferencesDialog::enableImagesDirectoryChangedBool() {
    imagesDirectoryChanged = true;
}


void PreferencesDialog::enableMusicPreferencesChangedBool() {
    musicPreferencesChanged = true;
}

void PreferencesDialog::enableRomsDirectoryChangedBool() {
    romsDirectoryChanged = true;
}

void PreferencesDialog::loadPreferences() {
    QSettings settings("settings", QSettings::NativeFormat);
    
    emulatorLineEdit->setText(settings.value("emulator").toString());
    fullScreenCheckBox->setChecked(settings.value("full_screen", true).toBool());
    fullScreenParameterLineEdit->setText(settings.value("full_screen_parameter").toString());
    otherParametersLineEdit->setText(settings.value("other_parameters").toString());
    
    romsDirectoryLineEdit->setText(settings.value("roms_directory", "roms").toString());
    imagesDirectoryLineEdit->setText(settings.value("images_directory", "images").toString());
    playMusicCheckBox->setChecked(settings.value("play_music", true).toBool());
    resumeMusicCheckBox->setChecked(settings.value("resume_music_when_game_exited", true).toBool());
    musicDirectoryLineEdit->setText(settings.value("music_directory", "music").toString());
}


void PreferencesDialog::saveAndClose() {
    QSettings settings("settings", QSettings::NativeFormat);
    
    settings.setValue("emulator", emulatorLineEdit->text());
    settings.setValue("full_screen", fullScreenCheckBox->isChecked());
    settings.setValue("full_screen_parameter", fullScreenParameterLineEdit->text());
    settings.setValue("other_parameters", otherParametersLineEdit->text());
    
    settings.setValue("roms_directory", romsDirectoryLineEdit->text());
    settings.setValue("images_directory", imagesDirectoryLineEdit->text());
    settings.setValue("play_music", playMusicCheckBox->isChecked());
    settings.setValue("resume_music_when_game_exited", resumeMusicCheckBox->isChecked());
    settings.setValue("music_directory", musicDirectoryLineEdit->text());
    
    close();
}
