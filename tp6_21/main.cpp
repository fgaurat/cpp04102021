#include <iostream>
#include "Rectangle.h"
using namespace std;


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
