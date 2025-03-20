#ifndef INSULINRESERVOIR_H
#define INSULINRESERVOIR_H

#include <QObject>

class InsulinReservoir : public QObject {
    Q_OBJECT

private:
    float level;

public:
    explicit InsulinReservoir(QObject *parent = nullptr);
    ~InsulinReservoir();

    void setLevel(float level);
    float getLevel() const;

signals:
    void levelChanged(float newLevel);
};

#endif // INSULINRESERVOIR_H
