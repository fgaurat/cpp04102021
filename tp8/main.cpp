#include<iostream>
#include "StackInt.h"

using namespace std;




void callShow(StackInt s){
    s.show();
}

int main(void)
{

    StackInt stack(3);// 10 entiers par défaut
    // StackInt stack2(20);// 20 entiers

    cout<<"getSize "<<stack.getSize()<<endl; // 0
    cout<<"getCapacity "<<stack.getCapacity()<<endl; // 10

    stack.append(10);
    stack.append(20);
    stack.append(30);
    stack.append(40);
    // cout<<"getSize "<<stack.getSize()<<endl; // 1
    // cout<<"getSize "<<stack.getSize()<<endl; // 2
    
    // int a = stack.pop();
    // cout<<a<<endl; //20
    // cout<<stack.getSize()<<endl; // 1

    stack.show(); // 10
    cout<<endl;
    callShow(stack);    
    cout<<endl;


}