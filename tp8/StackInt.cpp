#include <iostream>
#include <stdexcept>
#include "StackInt.h"

using namespace std;

StackInt::StackInt()
{
    this->capacity = 10;
    this->size = 0;
    this->stack = new int[this->capacity];
}

StackInt::StackInt(int capacity)
{
    this->capacity = capacity;
    this->size = 0;
    this->stack = new int[this->capacity];
}
StackInt::StackInt(const StackInt &src)
{
    this->capacity = src.capacity;
    this->size = src.size;
    this->stack = new int[this->capacity];

    for (int i = 0; i < this->size; i++)
    {
        this->stack[i] = src.stack[i];
    }
}

StackInt::~StackInt()
{
    delete this->stack;
}

int StackInt::getSize()
{
    return this->size;
}

int StackInt::getCapacity()
{
    return this->capacity;
}

void StackInt::append(int v)
{   

    cout<<this->size << this->capacity<<endl;
    if (this->size < this->capacity)
    {
        this->stack[this->size] = v;
        this->size++;
    }
    else throw out_of_range("out_of_range");
}

int StackInt::pop()
{
    this->size--;
    return this->stack[this->size];
}

void StackInt::show()
{
    for (int i = 0; i < this->size; i++)
    {
        cout << this->stack[i] << ", ";
    }
}