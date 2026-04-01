#include <iostream>
#include <cmath>
using namespace std;
int main (){
    float a, b, c, x1, x2, delta;
    cout << "Digite os valores de a, b e c, respectivamente ";
    cin >> a >> b >> c;
    if (a == 0) {
        cout << "Nao e uma equacao do segundo grau." << endl;
        return 0;
    }
    delta = b*b - 4*a*c;
    if (delta < 0) {
        cout << "Nao existem raizes reais." << endl;
    } else {
        x1 = (-b + sqrt(delta)) / (2*a);
        x2 = (-b - sqrt(delta)) / (2*a);
        cout << "O valor de x1 é: " << x1 << " e o de x2 é: " << x2 << endl;
    }
    return 0;
}