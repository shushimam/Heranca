#ifndef CIRCULO_H
#define CIRCULO_H

#include "ponto.h"

class Circulo : public Ponto {
private:
    double raio;
public:
    Circulo(double x, double y, double raio );
    void mover ( double x, double y );
    void mover ( const Ponto &p );
    void aumentar();
    void diminuir();
    double getRaio ( ) const;
    void show();
    bool equals ( Ponto *other );
    Ponto *clone ();
    ~Circulo();
};

#endif // CIRCULO_H
