
#ifndef QvkPulse_H
#define QvkPulse_H

#include <QObject>
#include <QFrame>
#include <QVBoxLayout>

class QvkPulse: public QObject
{
    Q_OBJECT
    
public:
    QvkPulse();
    virtual ~QvkPulse();
    static QString getPulseDeviceName( int value, QFrame *Pulseframe );
    static int getCountCheckedPulseDevices( QFrame *Pulseframe );
    static void pulseUnloadModule();
    //static const QString myPulseDevice( QFrame *Pulseframe );// original
    static const QString myPulseDevice( QVBoxLayout *Pulseframe );
    
    static QString getPulseInputDevices( int value );
    static QString getPulseInputName( int value );
    static int getPulseInputDevicesCount();


signals:

    
private slots:
  
  
private:

  
protected:  

};

#endif
