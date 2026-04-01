#include <iostream>
#include <string>
using namespace std;
int main () {
    string sexo;
    cout<< "Digite seu sexo (homem,mulher): ";
    cin>> sexo;

    float peso_ideal = 0;
    float h;
    cout<< "Digite sua altura: ";
    cin>> h;
 
    if (sexo == "homem") {
     peso_ideal=  (72.7*h)-58;
    } else if (sexo == "mulher") {
    peso_ideal= (62.1*h)-44.7;}
    
cout<< "Seu peso ideal é" << peso_ideal<< endl;
return 0;
}