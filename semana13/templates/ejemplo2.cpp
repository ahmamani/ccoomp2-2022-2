#include <iostream>
#include <string>

using namespace std;

template <typename T, typename U>
U sum(const T a, const U b) {
    return a + b;
}

int main() {
    cout << sum<int, float>(1, 5.9) << endl;
    cout << sum<double, int>(4.5, 6) << endl;
    
    return 0;
}