#include <iostream>
using namespace std;

int main() {
    int a, anguloNormalizado;
    
    cout << "Qual a medida do angulo desejado? ";
    cin >> a;

 
    anguloNormalizado = a % 360;

    if (anguloNormalizado < 0) {
        anguloNormalizado += 360;
    }


    if (anguloNormalizado == 0 || anguloNormalizado == 90 || 
        anguloNormalizado == 180 || anguloNormalizado == 270) {
        cout << "O seu angulo esta sobre o eixo" << endl;
    }
    else if (anguloNormalizado > 0 && anguloNormalizado < 90) {
        cout << "Primeiro quadrante" << endl;
    }
    else if (anguloNormalizado > 90 && anguloNormalizado < 180) {
        cout << "Segundo quadrante" << endl;
    }
    else if (anguloNormalizado > 180 && anguloNormalizado < 270) {
        cout << "Terceiro quadrante" << endl;
    }
    else { 
        cout << "Quarto quadrante" << endl;
    }

    return 0;
}
