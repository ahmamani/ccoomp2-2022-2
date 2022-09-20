#include <iostream>

using namespace std;

bool esPrimo(long long n) {
    long long factor = 2;
    while(factor <= n/2) {
        if( !(n % factor) )
            return false;
        factor++;
    }
    return true;
}

int main() {
    int num;
    cin >> num;
    do{
        cout << esPrimo(num) << endl;
        cin >> num;
    }while(num != -1);
    return 0;
}