#ifndef CARRE_H_
#define CARRE_H_

#include "Rectangle.h"

class Carre : public Rectangle
{

private:
    int cote;

public:
    Carre();
    Carre(int);
    ~Carre();
    int getCote();
    void setCote(int);
    virtual void affiche();
};
#endif