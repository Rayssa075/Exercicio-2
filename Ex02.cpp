#include <iostream>
using namespace std;
int main () {
    float N1, N2, N3, N4;
    float media;

    cout << "Digite a primeira nota: ";
    cin >> N1;  

    cout << "Digite a segunda nota: ";  
    cin >> N2;

    cout << "Digite a terceira nota: ";
    cin >> N3;

    cout << "Digite a quarta nota: ";
    cin >> N4;
   
     media = (N1 + N2 + N3 + N4) / 4;
     if ( media >=7)
    {
        cout << "Voce foi aprovado";
    }
    else
    {
        cout << "Voce foi reprovado";
    }

return 0;
}