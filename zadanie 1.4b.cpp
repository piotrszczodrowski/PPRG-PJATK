#include <iostream>

using namespace std;

int main()
{
    int n0=0, n1, n2, n3;
    cout << "Podaj pierwsza liczbe: ";
    cin >> n1;
    cout << "\n" << "Podaj druga liczbe: ";
    cin >> n2;
    cout << "\n" << "Podaj trzecia liczbe: ";
    cin >> n3;
    n0 = n1;
    if (n2 > n0) {
        n0 = n2;
    }
    if (n3 > n0) {
        n0 = n3;
    }
    cout << "Najwieksza liczba to: " << n0;
    return 0;
}