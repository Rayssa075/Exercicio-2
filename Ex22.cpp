#include <iostream>
using namespace std;
int main () {

    float tempo;
    cout<< "Digite o tempo gasto na viagem:";
    cin>> tempo;

    float velocidade;
    cout<< "Digite a velocidade media da viagem:";
    cin>> velocidade;

    float distancia = tempo * velocidade;
    float litros_usados= distancia/12;

    cout<<"A velocidade media foi:"<< velocidade<< "km/h"<<endl;
    cout<< "O tempo gasto foi de :"<< tempo <<" horas"<<endl;
    cout<< "A distacia percorrida foi de :"<< distancia<< "km" <<endl;
    cout<< "A distacia percorrida foi de :" <<litros_usados<< "litros" <<endl;

    return 0;

}

    