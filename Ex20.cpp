#include <iostream>
using namespace std;
int main () {
    float peso, altura, IMC;
    cout<<"Digite seu peso e altura, respectivamente";
    cin>>peso>>altura;
    IMC=peso/(altura*altura);
    cout<<"Seu IMC é de "<<IMC;
     if (IMC<=18.5) {
        cout<<" Abaixo do Peso"<< endl;
        } 
    else if (18.5<=IMC<=25) {
        cout<<" Peso Normal"<<endl;
    } 
    else if (25>=IMC>=30) {
        cout<<" Acima do Peso"<<endl;
    }
    else if (IMC>30) {
        cout<<" Obeso"<<endl;
    } return 0;
    }