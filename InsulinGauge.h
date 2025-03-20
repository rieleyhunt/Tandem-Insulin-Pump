#ifndef INSULINGAUGE_H
#define INSULINGAUGE_H

#include <QWidget>

namespace Ui {
class InsulinGauge;
}

class InsulinGauge : public QWidget
{
    Q_OBJECT

public:
    explicit InsulinGauge(QWidget *parent = nullptr);
    ~InsulinGauge();

private:
    Ui::InsulinGauge *ui;
};

#endif // INSULINGAUGE_H
