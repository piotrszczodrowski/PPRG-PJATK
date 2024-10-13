#include <iostream>

using namespace std;

int main()
{
    int n[3];
    int m[3];
    cout << "Podaj pierwsza liczbe: ";
    cin >> n[0];
    cout << "\n" << "Podaj druga liczbe: ";
    cin >> n[1];
    cout << "\n" << "Podaj trzecia liczbe: ";
    cin >> n[2];
    do {
        for (int i = 0; i < 2; i++) {
            m[i] = n[i];
            m[i + 1] = n[i + 1];
            if (m[i + 1] > m[i]){
                n[i] = m[i + 1];
                n[i + 1] = m[i];
            }
        }
    }
    while (((n[0] >= n[1]) && (n[1] >= n[2])) == false);
    cout << "\n" << n[0];
    
    return 0;
}