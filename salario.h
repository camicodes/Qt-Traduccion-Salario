#ifndef SALARIO_H
#define SALARIO_H

#include <QObject>

class salario : public QObject
{
    Q_OBJECT
public:
    explicit salario(QObject *parent = nullptr);

signals:

private:
    float const HORA_EXTRA = 20.10;
    float const HORA_MATUTINA = 5.15;
    float const HORA_VESPERTINA = 8.50;
    float const HORA_NOCTURNA = 12.65;
    float const IESS = 20.10;


};

#endif // SALARIO_H
