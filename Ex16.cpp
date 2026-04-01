#include <iostream> 
using namespace std;
int main () {
    float a, b, c, d;
    cout<< "Digite três numeros em ordem crescente: ";
    cin>> a >> b >> c;
    cout<< "Adicione mais um numero de sua escolha: ";
    cin>> d;
    if (d>c){
        cout<< "Seus numeros em ordem decrescente são: " << d  << c  << b  <<a;
    }
    if (b<d && d<c) {
        cout<< "Seus numeros em ordem decrescente são: " <<c << d  << b  << a;
    }
    if (b>d && d>a) {
        cout<< "Seus numeros em ordem decrescente são: " <<c  << b  << d  <<a;
    }
    if (d<a) {
        cout<< "Seus numeros em ordem decrescente são: " << c  << b  << a  <<d;
    }
    return 0;
}
