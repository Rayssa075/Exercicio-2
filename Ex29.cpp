#include <iostream>
using namespace std;
int main() {
    float n1, n2, n3, n4, n5, soma;
    cout << "Digite as 5 notas de 0 a 20";
    cin >> n1 >> n2 >> n3 >> n4 >> n5;
    if (n1 < 0 || n1 > 20 ||
        n2 < 0 || n2 > 20 ||
        n3 < 0 || n3 > 20 ||
        n4 < 0 || n4 > 20 ||
        n5 < 0 || n5 > 20) {
        cout << "Nota invalida!";
        return 0;
    }
    soma = n1 + n2 + n3 + n4 + n5;
    if (soma >= 70) {
        cout << "Aprovado";
    } 
    else if (soma >= 30) {
        cout << "Exame";
    } 
    else {
        cout << "Reprovado";
    }
    return 0;
}
