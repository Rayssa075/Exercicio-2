#include <iostream>
using namespace std;
int main () {
    float salario_atual;
    cout<< "Digite o valor de seu slario: ";
    cin>> salario_atual;
   if(salario_atual < 500){
       float aumento, salario;
       aumento = salario_atual * 0.30;
       salario = salario_atual + aumento;
       cout<< "Seu salario foi ajustado para: " << salario << endl;
    } else { salario_atual>500;
        cout<< "Voçê não tem direito ao ajuste salarial." << endl;
    }
    return 0;
}
					