#include <iostream>
#include <cmath>

using namespace std;

// Abstract class
class ICalcGeo
{
public:
    virtual float getSurface() = 0; // Pure virtual function
    virtual void affiche() = 0;     // Pure virtual function
};

class Couleur
{


public:
    Couleur()
    {
        cout << "Couleur()" << endl;
        this->couleur = 0;
    }
    Couleur(int couleur)
    {
        cout << "Couleur(int couleur)" << endl;
        this->couleur = couleur;
    }

    int getCouleur()
    {
        return this->couleur;
    }
    void setCouleur(int couleur)
    {
        this->couleur = couleur;
    }
private:
    int couleur;    
};

class Rectangle : public ICalcGeo
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

inline void Carre::affiche()
{
    cout << "Carre coté:" << this->cote << endl;
}

class CarreColore : public Couleur,public Carre
{
    public:
        CarreColore(int cote,int couleur) : Carre(cote),Couleur(couleur){}

        CarreColore():Carre(),Couleur(){}
        void affiche(){cout<<"CarreColore "<<Carre::getCote()<<" "<<Couleur::getCouleur();}
};

class Cercle : public ICalcGeo
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
    float s = M_PI * pow(this->rayon, 2);
    return s;
}

void Cercle::affiche()
{
    cout << "Cercle rayon:" << this->rayon << endl;
}

// void callAffiche(Rectangle &r)
void callAffiche(ICalcGeo &r)
{
    r.affiche();
    // cout << "Surface : " << r.getSurface() << endl;
}

int main(void)
{
    CarreColore cc(2,25);
    cc.affiche();
    // Carre c;
    Rectangle r(5, 6);
    Carre c1(2);
    // Cercle ce(2);
    // cout << "---" << endl;
    callAffiche(r);
    callAffiche(c1);
    // callAffiche(ce);
    // cout << ce.getSurface() << endl;
    // // c1.setCote(5);
    // // c1.affiche();
    // cout << "getSurface " << c1.getSurface() << endl;
    // cout << "---" << endl;
}
