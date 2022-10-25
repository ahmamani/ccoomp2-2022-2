#include <iostream>
#include "Point.h"

using namespace std;

int main() {
    Point p;

    // creando un puntero de tipo Point 'ptr'
    Point *ptr;
    // haciendo que el puntero 'ptr' apunte al objeto 'p'
    ptr = &p;

    ptr->print();


    return 0;
}