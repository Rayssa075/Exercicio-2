#include <iostream>
using namespace std;
int main () {
    float angulo;
    cout<< "Qual o angulo? ";
    cin>> angulo;
    if (angulo == 0, angulo == 90, angulo ==180, angulo == 270, angulo ==360){ 
    cout<< "O angulo esta sobre os eixos ";
    }
    if (angulo >0 && angulo <90){
        cout<< "O angulo esta no primeiro quadrante";
    }
    if (angulo>90 && angulo<180){
        cout<< "O angulo esta no segundo quadrante";
    }
    if (angulo>180 && angulo<270){
        cout<< "O angulo esta no terceiro quadrante";
    }
    if (angulo>270 && angulo<360){
        cout<< "O angulo esta no terceiro quuadrante";
    }
    return 0;
}
		
