#include <iostream>
#include <cmath>
#include "ICalcGeo.h"
#include "Rectangle.h"
#include "Carre.h"
#include "Cercle.h"

using namespace std;

void affiche(Rectangle r)
{

    cout << "void affiche(Rectangle r)" << endl;
    cout << "longueur " << r.getLongueur() << endl;
    cout << "largeur " << r.getLargeur() << endl;
    cout << "surface " << r.getSurface() << endl;
}

void affiche_addr(Rectangle *r)
{
    cout << "void affiche(Rectangle r)" << endl;
    // cout << "longueur " << (*r).getLongueur() << endl;
    cout << "longueur " << r->getLongueur() << endl;
    cout << "largeur " << r->getLargeur() << endl;
    cout << "surface " << r->getSurface() << endl;
}

void affiche_ref(Rectangle &r)
{
    cout << "void affiche(Rectangle r)" << endl;
    // cout << "longueur " << (*r).getLongueur() << endl;
    cout << "longueur " << r.getLongueur() << endl;
    cout << "largeur " << r.getLargeur() << endl;
    cout << "surface " << r.getSurface() << endl;
}



void callAffiche(ICalcGeo &r)
{
    // r.affiche();
    cout<<"Surface : "<<r.getSurface()<<endl;
}

int main(void)
{   
    // Carre c;
    Rectangle r(5, 6);
    Carre c1(2);
    Cercle ce(2);
    cout << "---" << endl;
    // callAffiche(r);
    callAffiche(c1);
    callAffiche(ce);
    cout<<ce.getSurface()<<endl;
    // c1.setCote(5);
    // c1.affiche();
    cout << "getSurface " << c1.getSurface() << endl;
    cout << "---" << endl;
}
