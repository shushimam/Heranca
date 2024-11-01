#include <iostream>

using namespace std;

#include "ponto.h"
#include "circulo.h"
//#include "contador.h"

int main()
{
    Ponto *p1, *p2, *p3;

    p1 = new Ponto ( 100, 150 );
    p2 = new Circulo ( 150, 250, 20 );

    p3 = p2->clone();

    p1->show();
    p2->show();
    p3->show();

    cout << "Equals..: " << p2->equals(p1) << endl;
    cout << "Distance: " << p2->getDistance(*p1) << endl;

    delete p1;
    delete p2;
    delete p3;

   /* Contador c;
    c.incrementar();
    c.incrementar(3);
    cout << "Contador: " << c.getcontador() << endl;*/

   /* p.setX(500);
    p.show();

    p.setY(600);
    p.show();

    cout << "X: " << p.getX() << endl;
    cout << "Y: " << p.getY() << endl;*/

    return 0;
}
