#ifndef HISTORYSCREEN_H
#define HISTORYSCREEN_H

#include <QWidget>

class HistoryScreen : public QWidget {
    Q_OBJECT
public:
    explicit HistoryScreen(QWidget *parent = nullptr);
    ~HistoryScreen();

private:
    void loadDeliveryLogs();
    void loadAlertsHistory();
};

#endif // HISTORYSCREEN_H