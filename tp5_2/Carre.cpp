#include <iostream>
#include <cmath>
#include "Rectangle.h"
#include "Carre.h"

using namespace std;

Carre::Carre()
{
    cout << "Carre::Carre()" << endl;
    this->cote = 0;
}
Carre::Carre(int cote) : Rectangle(cote, cote)
{
    cout << "Carre::Carre(int cote)" << endl;
    this->cote = cote;
}

Carre::~Carre()
{
    cout << "Carre::~Carre()" << endl;
}

int Carre::getCote()
{
    return this->cote;
}

void Carre::setCote(int cote)
{
    Rectangle::setLargeur(cote);
    Rectangle::setLongueur(cote);
    this->cote = cote;
}

void Carre::affiche()
{
    cout << "Carre coté:" << this->cote << endl;
}
