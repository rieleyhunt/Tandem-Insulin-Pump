#ifndef PROFILEMANAGEMENTSCREEN_H
#define PROFILEMANAGEMENTSCREEN_H

#include <QWidget>

class ProfileManagementScreen : public QWidget {
    Q_OBJECT
public:
    explicit ProfileManagementScreen(QWidget *parent = nullptr);
    ~ProfileManagementScreen();

private slots:
    void createProfile();
    void updateProfile();
    void deleteProfile();
};

#endif // PROFILEMANAGEMENTSCREEN_H