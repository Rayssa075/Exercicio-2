#include <iostream>
using namespace std;
int main () {
    float n1;
    cout <<"Digite o primeiro numero:";
    cin>>n1;

    float n2;
    cout<<"Digite o segundo numero:";
    cin>>n2;

    float media;
    media= (n1 + n2)/2;
    cout<<"A media entre" << n1 << "e" << n2 << "é:" << media << endl;

    float diferença;
    if ( n1 >= n2 ){
        diferença= n1 - n2;
        cout<< "A diferença entre" << n1 << "e" << n2 << "é:" << diferença << endl;
    }
    else {
        diferença= n2 - n1;
        cout<< "A diferença entre" << n1 << "e" << n2 << "é:" << diferença << endl;
    }

    float produto;
    produto= n1 * n2;
    cout<< "O produto entre" << n1 << "e" << n2 << "é:" << produto << endl;

    float resultado;
    if ( n2 != 0) {
        resultado = n1 / n2;
        cout<< "O resultado da divisão entre" << n1 << "e" << n2 << "é:" << resultado << endl;
    }
    else {
        cout<< "Erro: divisão por zero!" << endl;
    }

return 0;
}
