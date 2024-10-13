#include <iostream>

using namespace std;

int main()
{
    int input = 0;
    cout << "Wprowadz liczbne do sprawdzenia: ";
    cin >> input;
    if (input>0) {
        cout << "\n" << "Wprowadzona liczba jest dodatnia.";
    }
    else
        if (input<0) {
            cout << "\n" << "Wprowadzona liczba jest ujemna.";
        }
        else
            cout << "\n" << "Wprowadzona liczba jest rowna 0.";
}