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