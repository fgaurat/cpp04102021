
#ifndef RECTANGLE_H_
#define RECTANGLE_H_
#include "ICalcGeo.h"
class Rectangle:public ICalcGeo
{
public:
    int longueur, largeur;
    static int cpt;

public:
    Rectangle();
    Rectangle(int, int);
    Rectangle(Rectangle &source);
    ~Rectangle();
    int getLongueur();
    int getLargeur();
    void setLongueur(int);
    void setLargeur(int);
    float getSurface();
    static int getCpt();
    virtual void affiche();
};
#endif