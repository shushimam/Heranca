#include "contador.h"

#include <iostream>
using namespace std;

Contador::Contador()    {
    //this->contador = 0;
    cout << "Construindo contador" << endl;
    zerar();
}

void Contador::zerar() {
    this->contador = 0;
}

// Overload
void Contador::incrementar ( int c ) {
    this->contador+=c;
}

int Contador::getcontador() {
    return this->contador;
}

Contador::~Contador() {
    cout << "Destruindo contador" << endl;
}
