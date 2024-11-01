#ifndef RETA_H
#define RETA_H

#include "ponto.h"

class Reta {
private:
    double coef_angular;
    double coef_linear;
public:
    Reta( double coef_angular, double coef_linear );
    Reta( const Ponto &p1, const Ponto &p2 );

    double getCoef_angular() const;
    double getCoef_linear() const;

    bool pertente ( const Ponto &p );
    Ponto *intercept ( const Reta &other );
    ~Reta();
};

#endif // RETA_H
