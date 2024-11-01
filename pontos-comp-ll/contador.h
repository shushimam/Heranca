#ifndef CONTADOR_H
#define CONTADOR_H


class Contador {
private:
    int contador;
public:
    Contador();
    void zerar();
    void incrementar ( int c=1 );
    int getcontador();
    ~Contador();
};

#endif // CONTADOR_H
