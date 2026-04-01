#include <iostream>
using namespace std;
int main ( ) {
    int a, b, c, aux;
    cout<< "Digite a valor de a:";
    cin>> a;
    cout<< "Digite o valor de b:";
    cin>> b;
    cout<< "Digite o valor de c:";
    cin>> c;

    if ( a > b) {
        aux= a;
        a= b;
        b= aux;
    }
    if ( a > c) {
        aux= a;
        a = c;
        c = aux;
    }
    if (b > c) {
    aux = b;
    b = c;
    c = aux;
    }

    cout<< "Os numeros em ordem crescente são:" << a << " " << b << " " << c << endl;

return  0;

}