#include <iostream>
using namespace std;

int main(void)
{
    char s[4] = {'t','o','t','o'};

    int taille = sizeof(s);

    char *p = new char[taille+1]; // 5

    for(int i=0; i<taille;i++){
        p[i] = s[i];
    }

    p[taille] = '\0';


    *(p+1) = 0;
    cout<<p<<endl;

    delete p;
}