# Main settings
TEMPLATE = app
TARGET = zest
INCLUDEPATH += .
QT += widgets multimedia

# Input
SOURCES += main.cpp \
           source/PreferencesDialog.cpp \
           source/Zest.cpp
HEADERS += headers/PreferencesDialog.h \
           headers/Zest.h
FORMS += ui/PreferencesDialog.ui \
         ui/Zest.ui

# Location of ui_* files
UI_DIR = ui
OBJECTS_DIR = generated
MOC_DIR = generated
