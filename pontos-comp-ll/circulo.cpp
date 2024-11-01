#include "circulo.h"

#include <iostream>
using namespace std;

Circulo::Circulo(double x, double y, double raio )
    : Ponto(x,y), raio(raio)  {
    cout << "Construindo circulo " << endl;
    //this->raio = raio;
}

void Circulo::mover ( double x, double y ) {
    this->x = x;
    this->y = y;
}

void Circulo::mover ( const Ponto &p ) {
    this->x = p.getX();
    this->y = p.getY();
}

void Circulo::aumentar() {
    raio++;
}

void Circulo::diminuir() {
    raio--;
}

double Circulo::getRaio ( ) const {
    return raio;
}

void Circulo::show() {
    cout << "("
         << x
         << ","
         << y
         << ","
         << raio
         << ")"
         << endl;
}

Ponto *Circulo::clone () {
    return new Circulo ( x, y, raio );
}

bool Circulo::equals (Ponto *other ) {
    Circulo *v = dynamic_cast<Circulo*>(other);
    if (v!=nullptr) {
        return (this->x==v->x)
                && (this->y==v->y)
                && (this->raio==v->raio);
    }
    return false;
}

Circulo::~Circulo() {
    cout << "Destruindo circulo " << endl;
}


