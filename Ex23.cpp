#include <iostream>
using namespace std;
int main () {
    float a, b;
    cout<< "Insira dois numeros inteiros: ";
    cin>> a >> b;
    if(a>b){
        float d;
        d=a-b;
        cout<< "A diferença é: " <<d;
    }
    if(b>a){
        float d;
        d=b-a;
        cout<< "A diferença é: " <<d;
    }
    return 0;
}
