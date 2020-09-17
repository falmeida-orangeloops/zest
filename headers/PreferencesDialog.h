#ifndef PREFERENCESDIALOG_H
#define PREFERENCESDIALOG_H

#include "ui_PreferencesDialog.h"

class QCheckBox;
class QLineEdit;

class PreferencesDialog : public QDialog, private Ui::PreferencesDialog {
    Q_OBJECT
    
public:
    PreferencesDialog(QWidget *parent = 0);
    
    bool imagesDirectoryChanged;
    bool musicPreferencesChanged;
    bool romsDirectoryChanged;
    
private:
    void loadPreferences();
    
private slots:
    void saveAndClose();
    void enableImagesDirectoryChangedBool();
    void enableMusicPreferencesChangedBool();
    void enableRomsDirectoryChangedBool();
};

#endif
