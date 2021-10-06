#include <iostream>

#define ADD(a,b) a+b
#define PI 3.14

using namespace std;

// Passage de paramètre par valeur
int somme_val(int val_1,int val_2){

    int result = val_1+val_2;
    val_1 = 1000;
    val_2 = 1000;
    return result;
}

// Passage de paramètre par adresse
int somme_addr(int *val_1,int *val_2){

    int result = *val_1+*val_2;
    // *val_1 = 1000;
    // *val_2 = 1000;
    return result;
}

// Passage de paramètre par référence
inline int somme(int &val_1,int &val_2){

    int result = val_1+val_2;
    // val_1 = 1000;
    // val_2 = 1000;
    return result;
}

void my_swap(int *a,int *b){
    int c = *b;
    *b=*a;
    *a=c;
}
void my_swap_2(int &a,int &b){
    int c = b;
    b=a;
    a=c;
}

int main(void){
    int a=2,b=3,c=0;

    // c = somme_addr(&a,&b);
    int result = a+b;

    c = somme(a,b);
    cout<<"c : "<<c<<endl;
    cout<<a<<" "<<b<<endl;

    cout<<a<<" "<<b<<endl;
    // a = 2, b = 3 
    my_swap(&a,&b);
    // a = 3, b = 2 
    cout<<a<<" "<<b<<endl;

    cout<<a<<" "<<b<<endl;
    my_swap_2(a,b);
    cout<<a<<" "<<b<<endl;
    
    return 0;
}