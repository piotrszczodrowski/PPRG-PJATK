#include <iostream>

using namespace std;

int main()
{
    int number1, number2, number3;
    cout << "Podaj pierwsza liczbe: ";
    cin >> number1;
    cout << "\n" << "Podaj druga liczbe: ";
    cin >> number2;
    cout << "\n" << "Podaj trzecia liczbe: ";
    cin >> number3;
    if ((number1 >= number2) && (number1 >= number3)) {
        cout << "\n" << "Najwieksza liczba to: " << number1;
    }
    else if ((number2 >= number1) && (number2 >= number3)) {
        cout << "\n" << "Najwieksza liczba to: " << number2;
    }
    else cout << "\n" << "Najwieksza liczba to: " << number3;
    return 0;
}