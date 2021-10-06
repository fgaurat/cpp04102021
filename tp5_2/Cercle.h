#include <iostream>
#include <cmath>
#ifndef CERCLE_H_
#define CERCLE_H_
#include "ICalcGeo.h"
class Cercle:public ICalcGeo
{
private:
    int rayon;

public:
    Cercle();
    Cercle(int);
    int getRayon();
    void setRayon(int);
    float getSurface();
    void affiche();
};
#endif