#include <iostream>
using namespace std;
int main() {
    int numero, n;
    cout << "Digite um numero";
    cin >> numero;
    cout << "Digite o bit que vai limpar";
    cin >> n;
    numero &= ~(1 << n);
    cout << "o resultado é:" << numero << endl;
    return 0;
}
