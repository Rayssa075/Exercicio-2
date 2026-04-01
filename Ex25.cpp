#include <iostream>
using namespace std;
int main () {

    float salario_bruto;
    cout<< "Digite o valor do seu salario bruto:";
    cin>>salario_bruto;

    float salario_minimo = 1621.00;
    float INSS;
    float salario_liquido;

    if ( salario_bruto <= salario_minimo*3) {
        INSS = salario_bruto * 0.08;
        salario_liquido = salario_bruto - INSS;
        cout<<"O valor do seu salario bruto é:"<<salario_bruto<< "reais, o valor do INSS é:"<<INSS<< "reais, e o valor do seu salario liquido é:"<<salario_liquido<<"reais."<<endl;
    }
     else if ( salario_bruto > salario_minimo*3) {
        INSS = salario_bruto * 0.1;
        salario_liquido = salario_bruto - INSS;
        cout<<"O valor do seu salario bruto é:"<<salario_bruto<< "reais, o valor do INSS é:"<<INSS<< "reais, e o valor do seu salario liquido é:"<<salario_liquido<<"reais."<<endl;
     }
     if (INSS = 1621.00) {
        INSS = 1621.00;
        salario_bruto = salario_bruto - INSS;
         cout<<"O valor do seu salario bruto é:"<<salario_bruto<< "reais, o valor do INSS é:"<<INSS<< "reais, e o valor do seu salario liquido é:"<<salario_liquido<<"reais."<<endl;
     }

     return 0;
}