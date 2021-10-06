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
    Rectangle(const Rectangle &source);
    ~Rectangle();
    int getLongueur() const;
    int getLargeur() const;
    void setLongueur(int);
    void setLargeur(int);
    int getSurface() const;
    static int getCpt();
    friend bool equals(const Rectangle &, const Rectangle &);
    bool operator==(const Rectangle &);
    int operator[](int);
    operator int();
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
Rectangle::Rectangle(const Rectangle &source)
{
    cout << "Rectangle::Rectangle(Rectangle &source)" << endl;
    this->longueur = source.longueur;
    this->largeur = source.largeur;
    source.getLargeur();
}

Rectangle::~Rectangle()
{
    cout << "Rectangle::~Rectangle()" << endl;
    Rectangle::cpt--;
}

int Rectangle::getLongueur() const
{
    return this->longueur;
}

int Rectangle::getLargeur() const
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

int Rectangle::getSurface() const
{
    return this->largeur * this->longueur;
}
int Rectangle::getCpt()
{
    return Rectangle::cpt;
}

bool Rectangle::operator==(const Rectangle &r)
{
    bool res = false;
    if (this->longueur == r.longueur && this->largeur == r.largeur)
        res = true;

    return res;
}

int Rectangle::operator[](int i)
{
    int ret = 0;
    if (i == 0)
        ret = this->longueur;
    else
        ret = this->largeur;
    
    return ret;
}

Rectangle::operator int(){
    return this->getSurface();
}

int main(void)
{
    Rectangle r(1, 2);
    Rectangle r1(3, 2);

    int b = (int)r;

    cout << r[0] << endl;
    cout << b << endl;
    // if (r.operator==(r1))
    if (r == r1)
        cout << "OK ==" << endl;
    else
        cout << "KO ==" << endl;
}
