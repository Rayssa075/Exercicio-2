#include <iostream>
using namespace std;
int main () {

    int dia =0 ;
    cout<<"Digite um numero de 1 a 7 para saber o dia da semana correspondente: ";
    cin >> dia;

    switch (dia) {
        case 1:
        cout<<"Domingo"<< endl;
        break;
        case 2:
        cout<<"Segunda_feira"<< endl;
        break;
        case 3:
        cout<<"Terça_feira"<< endl;
        break;
        case 4:
        cout<<"Quarta_feira"<< endl;
        break;
        case 5:
        cout<<"Quinta_feira"<< endl;
        break;
        case 6:
        cout<<"Sexta_feira"<< endl;
        break;
        case 7:
        cout<<"Sabado"<< endl;
        break;
    }

return 0;
}