#include <iostream>
using namespace std;
int main (){
    float a, b, c, d; 
    cout<< "Qual a nota de suas avaliações? ";
    cin>> a >> b >> c;
    d= (a+b+c)/3;
    if(d>=6){
        cout<< "Você foi aprovado, sua média é: "<<d;
    }
    if(d<6){
        float r, m;
        cout<< "Insira sua nota da recuperação paralela: ";
        cin>> r;
        m= (a+b+c+r)/4;
        if(m>6){
            cout<< "Você foi aprovado na recuperação paralela, sua média é: " <<m;
        }
        if(m<6){
            cout<< "Você foi reprovado, sua média é: " <<m;
        }
    }
    return 0;
}
