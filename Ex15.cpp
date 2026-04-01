#include <iostream>
using namespace std;

int main() {
    float n_teorica, n_pratica, n_exercicios, media;

    cout << "Digite a nota da avaliacao teorica: ";
    cin >> n_teorica;
    cout << "Digite a nota da avaliacao pratica: ";
    cin >> n_pratica;
    cout << "Digite a nota dos exercicios: ";
    cin >> n_exercicios;

    
    media = ((n_teorica * 7) + (n_pratica * 2) + (n_exercicios * 1)) / 10;

    cout << "\nMedia Final: " << media << endl;
    cout << "Conceito: ";

    
    if (media >= 85) {
        cout << "A" << endl;
    } 
    else if (media >= 70) {
        cout << "B" << endl;
    } 
    else if (media >= 60) {
        cout << "C" << endl;
    } 
    else if (media >= 50) {
        cout << "D" << endl;
    } 
    else {
        cout << "E (Reprovado)" << endl;
    }

    return 0;
}