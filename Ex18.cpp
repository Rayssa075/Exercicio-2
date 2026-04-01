#include <iostream>
using namespace std;
int main() {
    int op, a, b, c, x;
    cout << "Escolha uma opcao:\n";
    cout << "1 - Ordem crescente\n";
    cout << "2 - Ordem decrescente\n";
    cin >> op;
    cout << "Digite tres numeros:\n";
    cin >> a >> b >> c;
    if (a > b) { x = a; a = b; b = x; }
    if (a > c) { x = a; a = c; c = x; }
    if (b > c) { x = b; b = c; c = x; }
    if (op == 1)
        cout << "Ordem crescente: " << a << " " << b << " " << c;
    else if (op == 2)
        cout << "Ordem decrescente: " << c << " " << b << " " << a;
    else
        cout << "Opcao invalida";
    return 0;
}
