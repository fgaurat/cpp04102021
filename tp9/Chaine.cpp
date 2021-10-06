#include <iostream>
#include "string.h"
#include "Chaine.h"

using namespace std;

Chaine::Chaine()
{
    cout<<"Chaine::Chaine()"<<endl;
    this->taille = 0;
    this->id = 0;
}
Chaine::Chaine(char *s,int id)
{   
    cout<<"Chaine::Chaine(char *s,int id)"<<endl;
    this->id = id;
    this->taille = strlen(s) + 1;
    this->adr = new char[this->taille];
    for (int i = 0; i < this->taille; i++)
    {
        this->adr[i] = s[i];
    }
    this->adr[this->taille - 1] = '\0';
}

Chaine::Chaine(const Chaine &src)
{
    cout<<"Chaine::Chaine(const Chaine &src)"<<endl;
    this->taille = src.taille;
    this->id = src.id+1;
    this->adr = new char[this->taille];

    for (int i = 0; i < this->taille; i++)
    {
        this->adr[i] = src.adr[i];
    }
}

Chaine::~Chaine()
{
    cout << "Chaine::~Chaine() "<<this->id<<" ";
    this->affiche();
    cout<< endl;
    delete adr;
}

void Chaine::affiche()
{
    for (int i = 0; i < this->taille; i++)
    {
        cout << this->adr[i];
    }
}

bool Chaine::operator==(const Chaine &ch)
{
    bool ret = true;

    if (this->taille == ch.taille)
    {
        for (int i = 0; i < this->taille; i++)
        {
            if (this->adr[i] != ch.adr[i])
            {
                ret = false;
                break;
            }
        }
    }

    return ret;
}

Chaine& Chaine::operator=(const Chaine &ch)
{
    // if (this != &ch)

    if (this->adr != ch.adr)
    {   
            delete this->adr;
            this->taille = ch.taille;
            this->adr = new char[ch.taille];
            for (int i = 0; i < this->taille; i++)
                this->adr[i] = ch.adr[i];            
    }

    return *this;   
}

char Chaine::operator[](int i)
{
    return this->adr[i];
}

Chaine Chaine::operator+(const Chaine &ch)
{
    Chaine r;
    r.taille = this->taille + ch.taille;
    r.adr = new char[r.taille];
    r.id = 4;
    for (int i = 0; i < this->taille; i++)
        r.adr[i] = this->adr[i];

    for (int i = 0; i < ch.taille; i++)
        r.adr[this->taille + i] = ch.adr[i];

    return r;
}


