#include <iostream>

using namespace std;

int main()
{
    int input = 0;
    cout << "Wprowadz liczbne do sprawdzenia: ";
    cin >> input;
    if (input==0) {
        cout << "\n" << "Wprowadzona liczba jest rowna 0 (zadna).";
    }
    else
        if (input%2==0) {
            cout << "\n" << "Wprowadzona liczba jest parzysta.";
        }
        else
            cout << "\n" << "Wprowadzona liczba jest nieparzysta.";
}