#include <iostream>
using namespace std;
int main () {
    int cont = 0;
    float salario_1;
    cout<<"Digite o valor do salario do primeiro membro da familia:";
    cin>> salario_1;

    float salario_2;
    cout<< "Difite o salario do segundo membro da familia:";
    cin>> salario_2;

    float salario_3;
    cout<< "Digite o salario do terceiro membro da familia:";
    cin>> salario_3;

    float salario_4;
    cout<<"Digite o salario do quarto membro da familia:";
    cin>> salario_4;

    float salario_5;
    cout<< "Digite o salario do quinto membro da familia:";
    cin>> salario_5;

    float salario_minimo=1621.00;
    if ( salario_1 > salario_minimo) {
        cont++;
    }
    if ( salario_2 > salario_minimo) {
        cont++;
    }
    if ( salario_3 > salario_minimo) {
        cont++;
    }
    if ( salario_4 > salario_minimo) {
        cont++;
    }
    if ( salario_5>salario_minimo) {
        cont++;
    }
    cout<< " A quantidade de membros da familia que recebem mais do que um salario minimo é: " << cont << endl;
    return 0;
}