#include <iostream>
using namespace std;
int main () {
    float saldo_médio;
    cout<< "Digite o valor de seu saldo médio: ";
    cin>> saldo_médio;
    float valor_do_credito;
    if(saldo_médio > 400) {
        valor_do_credito = saldo_médio * 0.30;
    } else if(saldo_médio >= 300.01 && saldo_médio <= 400) {
        valor_do_credito = saldo_médio * 0.25;
    } else if(saldo_médio >= 200.01 && saldo_médio <= 300.00) {
        valor_do_credito = saldo_médio * 0.20;
    } else if (saldo_médio <= 200.00) { 
        valor_do_credito = saldo_médio * 0.10;
    }
    cout << "O valor do crédito é: " << valor_do_credito << endl; 
    return 0;
}
