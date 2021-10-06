#include<iostream>

using namespace std;



int main(void){
    //a contient un entier
    int a; // Déclaration
    a=15; // initialise
    //adr_a contient l'adresse d'un entier
    int* adr_a;  // Déclaration
    adr_a = &a;

    a=25;
    *adr_a=25;

    int b = 2;// Déclaration et init


    cout<<a<<endl;
    cout<<*(&a)<<endl;
    cout<<*adr_a<<endl;

    return 0;
}
