#include <iostream>
using namespace std;

class Rectangle
{
private:
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
    int getSurface();
    static int getCpt();
};

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

int Rectangle::getSurface()
{
    return this->largeur * this->longueur;
}
int Rectangle::getCpt()
{
    return Rectangle::cpt;
}

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

int main(void)
{
    Rectangle r(1, 2);
    cout << "-----" << endl;
    // affiche(r);
    affiche_ref(r);
    cout << "-----" << endl;
}

int main1(void)
{
    Rectangle r(5, 6);
    cout << "cpt " << Rectangle::cpt << endl;
    Rectangle r1;
    cout << "cpt " << Rectangle::cpt << endl;

    if (true)
    {
        Rectangle r2;
        cout << "cpt " << Rectangle::cpt << endl;
    }

    cout << r.getLongueur() << endl; // 5
    cout << r.getLargeur() << endl;  // 6
    cout << "getSurface " << r.getSurface() << endl;
    r.setLongueur(56);
    r.setLargeur(15);

    cout << r.getLongueur() << endl; // 15
    cout << r.getLargeur() << endl;  // 56

    cout << "dernier cpt " << Rectangle::cpt << endl;
    return 0;
}
