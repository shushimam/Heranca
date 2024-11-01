#ifndef PONTO_H
#define PONTO_H

class Ponto {
protected:
    double x;
    double y;
public:
    // overload
    Ponto();
    Ponto(double x, double y);
    Ponto(const Ponto &p);
    double getX() const;
    void setX(double newX);
    double getY() const;
    void setY(double newY);

    void moveTo ();
    void moveTo ( double x, double y );
    void moveTo ( const Ponto &other);

    virtual bool equals (Ponto *other );

    double getDistance ( const Ponto &other );

    virtual Ponto *clone ();

    // override
    virtual void show();
    virtual ~Ponto();
};

#endif // PONTO_H
