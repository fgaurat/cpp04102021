#include <iostream>
using namespace std;

class Rectangle
{
private:
    int longueur, largeur;
    static int cpt;
    static Rectangle* instance;

    Rectangle();
    Rectangle(int, int);

public:
    Rectangle(Rectangle &source);
    ~Rectangle();
    int getLongueur();
    int getLargeur();
    void setLongueur(int);
    void setLargeur(int);
    int getSurface();
    static int getCpt();
    static Rectangle* getInstance();
};

int Rectangle::cpt = 0;
Rectangle* Rectangle::instance =NULL;


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
    cout<<source.getLongueur()<<" "<<source.getLongueur();
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

Rectangle* Rectangle::getInstance()
{
    if(!instance){
        instance = new Rectangle();
    }
    
    return instance;
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
    Rectangle *r = Rectangle::getInstance();
    Rectangle *r1 = Rectangle::getInstance();

    cout<<r->getLargeur()<<endl;
    cout<<r->getLongueur()<<endl;

    cout<<r1->getLargeur()<<endl;
    cout<<r1->getLongueur()<<endl;

    r1->setLargeur(10);
    cout<<r1->getLargeur()<<endl;
    cout<<r->getLargeur()<<endl;
}
