#include <iostream>
#include <cmath>
#include "Rectangle.h"

using namespace std;


int Rectangle::cpt = 0;

Rectangle::Rectangle(int longueur, int largeur)
{
    cout << "Rectangle::Rectangle(int longueur,int largeur)" << endl;
    this->longueur = longueur;
    this->largeur = largeur;
    Rectangle::cpt++;
}
Rectangle::Rectangle()
{
    cout << "Rectangle::Rectangle()" << endl;
    this->longueur = 0;
    this->largeur = 0;
    Rectangle::cpt++;
}
Rectangle::Rectangle(Rectangle &source)
{
    cout << "Rectangle::Rectangle(Rectangle &source)" << endl;
    this->longueur = source.longueur;
    this->largeur = source.largeur;
}

Rectangle::~Rectangle()
{
    cout << "Rectangle::~Rectangle()" << endl;
    Rectangle::cpt--;
}

int Rectangle::getLongueur()
{
    return this->longueur;
}

int Rectangle::getLargeur()
{
    return this->largeur;
}

void Rectangle::setLongueur(int longueur)
{
    this->longueur = longueur;
}

void Rectangle::setLargeur(int largeur)
{
    this->largeur = largeur;
}

float Rectangle::getSurface()
{
    return this->largeur * this->longueur;
}
int Rectangle::getCpt()
{
    return Rectangle::cpt;
}

void Rectangle::affiche()
{
    cout << "Rectangle longueur " << this->longueur << ", largeur" << this->largeur << endl;
}





