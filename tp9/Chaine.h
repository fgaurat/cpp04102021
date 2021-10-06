

class Chaine
{
    private:
        char *adr;
        int taille;
        int id;
    public:
        Chaine();                  // 1
        Chaine(char *s,int);           // 2
        Chaine(const Chaine&);
        ~Chaine();                 // 3
        void affiche();            // 4
        bool operator==(const Chaine&);  // 6 
        char operator[](int);      // 5
        Chaine operator+(const Chaine&); // 5
        Chaine& operator=(const Chaine &ch);

};