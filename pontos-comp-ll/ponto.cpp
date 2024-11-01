#include "ponto.h"

#include <iostream>
#include <math.h>

using namespace std;

Ponto::Ponto() {
    this->x = 0;
    this->y = 0;
}

Ponto::Ponto(double x, double y) {
    cout << "Construindo ponto" << endl;
    this->x = x;
    this->y = y;
}

Ponto::Ponto(const Ponto &p) {
    this->x = p.x;
    this->y = p.y;
}

double Ponto::getX() const
{
    return x;
}

void Ponto::setX(double newX)
{
    x = newX;
}

double Ponto::getY() const
{
    return y;
}

void Ponto::setY(double newY)
{
    y = newY;
}

void Ponto::moveTo () {
    this->x = 0;
    this->y = 0;
}

void Ponto::moveTo ( double x, double y ) {
    this->x = x;
    this->y = y;
}

void Ponto::moveTo ( const Ponto &other) {
    this->x = other.x;
    this->y = other.y;
}

bool Ponto::equals (Ponto *other) {
    Ponto *v = dynamic_cast<Ponto*>(other);
    if (v!=nullptr) {
        return (this->x==v->x) && (this->y==v->y);
    }
    return false;
}

double Ponto::getDistance ( const Ponto &other ) {
   // d = sqrt((x1-x2)^2+(y1-y2)^2);
    return sqrt( pow(this->x-other.x, 2) +
                 pow(this->y-other.y, 2));

}


void Ponto::show() {
    cout << "("
         << x
         << ","
         << y
         << ")"
         << endl;
}

Ponto *Ponto::clone () {
   //return new Ponto ( *this );
    return new Ponto ( x, y );
}

Ponto::~Ponto() {
    cout << "Destruindo ponto" << endl;
}

