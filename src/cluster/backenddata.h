#ifndef BACKENDDATA_H
#define BACKENDDATA_H

#include <QObject>

class BackendData : public QObject
{
    Q_OBJECT
    Q_PROPERTY(int speed          MEMBER _speed      NOTIFY speedChanged)
    Q_PROPERTY(int speedLimit     MEMBER _speedLimit NOTIFY speedLimitChanged)
    Q_PROPERTY(int ePower         MEMBER _ePower     NOTIFY ePowerChanged)
    Q_PROPERTY(QString drivetrain MEMBER _drivetrain NOTIFY drivetrainChanged)

public:
    explicit BackendData(QObject *parent = nullptr);

signals:
    void speedChanged();
    void speedLimitChanged();
    void ePowerChanged();
    void drivetrainChanged();
public slots:

private:
    int _speed;
    int _speedLimit;
    int _ePower;
    QString _drivetrain;
};

#endif // BACKENDDATA_H
