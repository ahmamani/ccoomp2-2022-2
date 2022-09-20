#include <iostream>

using namespace std;

int main () {
    int nume1, nume2;
    cout << "ingrese los numeros deseados";
    cin >> nume1;
    cin >> nume2;


    if (nume1 % 2 == 0)
        cout << "El numero " << nume1 << " es PAR" << endl;
    else
        cout << "El numero " << nume1 << " es IMPAR" << endl;

    if (nume2 % 2 == 0)
        cout << "El numero " << nume2 << " es PAR" << endl;
    else
        cout << "El numero " << nume2 << " es IMPAR" << endl;

    if ( (nume1+nume2) % 2 == 0)
        cout << "La suma de " << nume1 << " y " << nume2 << " es PAR" << endl;
    else
        cout << "La suma de " << nume1 << " y " << nume2 << " es IMPAR" << endl;

    
    return 0;
}
