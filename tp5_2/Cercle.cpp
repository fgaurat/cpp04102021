#include "Cercle.h"
#include <iostream>
#include <cmath>

using namespace std;

Cercle::Cercle()
{
    this->rayon = 0;
}

Cercle::Cercle(int rayon)
{
    this->rayon = rayon;
}

int Cercle::getRayon()
{
    return this->rayon;
}

void Cercle::setRayon(int rayon)
{
    this->rayon = rayon;
}

float Cercle::getSurface()
{
    float s = M_PI*pow(this->rayon,2);
    return s;
}

void Cercle::affiche()
{
    cout << "Cercle rayon:" << this->rayon << endl;
}