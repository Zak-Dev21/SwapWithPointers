
#include <iostream>
#include "Header.h"
using namespace std;

int main()
{
    int x = 10;
    int y = 20;

    swap(&x, &y);

    cout << x << endl;
    cout << y;
}

