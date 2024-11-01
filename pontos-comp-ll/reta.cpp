#include "reta.h"

#include <iostream>
using namespace std;

Reta::Reta( double coef_angular, double coef_linear ) {
    cout << "Construindo reta" << endl;
    this->coef_angular = coef_angular;
    this->coef_linear  = coef_linear;
}

Reta::Reta( const Ponto &p1, const Ponto &p2 ) {
    this->coef_angular = (p2.getY()-p1.getY()) /
                         (p2.getY()-p1.getX());

    this->coef_linear = p1.getY() - this->coef_angular * p1.getX();
}

double Reta::getCoef_angular() const
{
    return coef_angular;
}

double Reta::getCoef_linear() const
{
    return coef_linear;
}

bool Reta::pertente ( const Ponto &p ) {
    return p.getY()==(this->coef_angular*p.getX()+this->coef_linear);
}

Ponto *Reta::intercept ( const Reta &other ) {
    Ponto *p=nullptr;
    if (this->coef_angular==other.coef_angular) {

    }
    return p;
}

Reta::~Reta() {
    cout << "Destruindo reta" << endl;
}
