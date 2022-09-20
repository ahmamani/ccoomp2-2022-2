#include <iostream>

using namespace std;
int main () {
    char caracter;    
    cout << "Ingrese un caracter ";
    cin >> caracter;
    cout << static_cast<int>(caracter) << endl;

    return 0;
}
