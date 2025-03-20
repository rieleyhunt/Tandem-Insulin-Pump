QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    main.cpp \
    mainwindow.cpp


HEADERS += \
    mainwindow.h \
    BasalSettingsScreen.h \
    BatteryIndicator.h \
    BatteryManager.h \
    BolusCalculator.h \
    BolusCalculatorView.h \
    BolusScreen.h \
    CGMDataProcessor.h \
    DataGraph.h \
    DataLogger.h \
    DeliveryControlScreen.h \
    ErrorHandler.h \
    HistoryScreen.h \
    HomeScreen.h \
    InsulinDelivery.h \ 
    InsulinGauge.h \
    InsulinReservoir.h \
    PINLockScreen.h \
    ProfileManagementScreen.h \
    PumpController.h \
    SettingsScreen.h \
    UserProfileManager.h \
    UserSettingsManager.h
    
FORMS += \
    mainwindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
