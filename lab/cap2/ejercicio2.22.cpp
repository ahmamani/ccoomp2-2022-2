#include <iostream>

using namespace std;

int main() {

    int n1, n2, n3, n4, n5;
    int mayor;
    int menor;

    cout << "Ingrese primer numero ";
    cin >> n1;
    mayor = menor = n1;

    cout << "Ingrese segundo numero ";
    cin >> n2;

    if (mayor < n2)
        mayor = n2;
    if(menor > n2 )
        menor = n2;    

    cout << "Ingrese tercer numero ";
    cin >> n3;

    if (mayor < n3)
        mayor = n3;
    if(menor > n3 )
        menor = n3;
    
    cout << "Ingrese cuarto numero ";
    cin >> n4;

    if (mayor < n4)
        mayor = n4;
    if(menor > n4 )
        menor = n4;

    cout << "Ingrese quinto numero ";
    cin >> n5;

    if (mayor < n5)
        mayor = n5;
    if(menor > n5 )
        menor = n5;

    cout << "Mayor: " << mayor << endl;
    cout << "Menor: " << menor << endl;


    return 0;
}




