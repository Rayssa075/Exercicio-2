#include <iostream>
using namespace std;

int main () {

    float  código_correspondente_ao_cargo = 0;
    cout<< "Digite o codigo correspondente ao cargo:";
    cin>> código_correspondente_ao_cargo;
    float salário_atual=0;
    cout<< "Digite o valor do seu salario atual:";
    cin>> salário_atual;

    float cargo, aumento_de_salário, novo_salário;
    float Escrituario = 1, Secretario = 2, caixa = 3, Gerente = 4, Diretor = 5;
    if( código_correspondente_ao_cargo == 1) {
        cargo = Escrituario;
        aumento_de_salário = salário_atual * 0.50;
        novo_salário = salário_atual + aumento_de_salário;
        cout<< "O cargo é Escritorio, o aumento de salário é: " << aumento_de_salário<< " e o novo salario é:" << novo_salário<< endl;
    } else if( código_correspondente_ao_cargo == 2 ) {
        cargo = Secretario;
        aumento_de_salário = salário_atual * 0.35;
        novo_salário = salário_atual + aumento_de_salário;
        cout<< "O cargo é Secretario, o aumento de salário é: " << aumento_de_salário<< " e o novo salario é:" << novo_salário<< endl;
    } else if( código_correspondente_ao_cargo == 3 ) {
        cargo = caixa;
        aumento_de_salário = salário_atual * 0.20;
        novo_salário = salário_atual + aumento_de_salário;
        cout<< "O cargo é Caixa, o aumento de salário é: " << aumento_de_salário<< " e o novo salario é:" << novo_salário<< endl;
    } else if( código_correspondente_ao_cargo == 4 ) {
        cargo = Gerente;
        aumento_de_salário = salário_atual * 0.10;
        novo_salário = salário_atual + aumento_de_salário;
        cout<< "O cargo é Gerente, o aumento de salário é: " << aumento_de_salário<< " e o novo salario é:" << novo_salário<< endl;
    } else if( código_correspondente_ao_cargo == 5 ) {
        cargo = Diretor;
        aumento_de_salário = 0;
        novo_salário = salário_atual + aumento_de_salário;
        cout<< "O cargo é Diretor, o aumento de salário é: " << aumento_de_salário<< " e o novo salario é:" << novo_salário<< endl;
    }
 return 0;
}
    

