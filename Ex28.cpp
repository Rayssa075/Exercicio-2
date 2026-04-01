#include <iostream>
using namespace std;
int main () {
    float w, x, y, t;
    cout<< "Insira o valor de t: ";
    cin>> t;
    y=t/2+4;
    x=2*t-4;
    w=2*t+4*y-3*x;
    if(t>100){
        cout<< "ERRO!!! O valor digitado é invalido e não foi possivel concluir o calculo";
    }
    if(t<=2){
        cout<< "ERRO!!! O valor digitado é invalido e não foi possivel concluir o calculo";
    }
    if (t>2 && t<100){
        cout<< "O valor de w é: " <<w;
    }
    return 0;
}
