QT -= gui

CONFIG += c++11 console
CONFIG -= app_bundle

SOURCES += \
        main.cpp

ALL_FILES = $${files($${PWD}/*)}
SOURCES_FILES = $${files($${PWD}/*.cpp)}
SOURCES_FILES_NOPWD = $${files(*.cpp)}
message("ALL_FILES =" $${ALL_FILES})
message("SOURCES_FILES =" $${SOURCES_FILES})
message("SOURCES_FILES_NOPWD =" $${SOURCES_FILES_NOPWD})
