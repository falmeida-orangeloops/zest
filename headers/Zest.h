#ifndef ZEST_H
#define ZEST_H

class QMediaPlayer;

#include "ui_Zest.h"

class Zest : public QDialog, private Ui::Zest {
	Q_OBJECT
	
public:
	Zest(QWidget *parent = 0);
    
private slots:
	void filter(QString text);
	void play();
	void showImageForCurrentGame();
    void showPreferencesDialog();
    
private:
    Ui::Zest ui;
    
    QMediaPlayer *musicPlayer;
    QStringList romFilenames;
    
    void loadMusic();
    void loadRoms();
};

#endif
