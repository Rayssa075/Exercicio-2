#include <iostream>
using namespace std;
int main () { 
    int idade;
    int x;

    cout << "Digite a idade: ";
    cin >> x;

    idade= x >= 18;
    if ( idade >=18)
    {
        cout << "Voce e maior de idade";
    }
    else
    {
        cout << "Voce e menor de idade";
    }

    return 0;
}