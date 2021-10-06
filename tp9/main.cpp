#include <iostream>
#include "Chaine.h"
#include "string.h"

using namespace std;

void callAffiche(Chaine c)
{
    c.affiche();
    cout<<endl;
}

int main(void)
{
    Chaine c("Hello",1);
    Chaine c1("World",2);
    Chaine c2("toto",3);

    // c.affiche();
    // cout << endl;
    // if (c == c1)
    // {
    //     cout << "ok" << endl;
    // }
    // else
    // {
    //     cout << "ko" << endl;
    // }

    // cout << c[0] << endl;

    cout<<"---"<<endl;
    c2 = c+c1;
    cout<<"---"<<endl;
}