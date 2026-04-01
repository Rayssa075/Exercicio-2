#include <iostream>
using namespace std;
int main () {
    float x = 0;
    cout<<"Digite o valor do salario, em reais.";
    cin>>x;
    if (x>=5000) {
        cout<<"Bem remunerado"<< endl;
        }else{
            cout<<"Mal remunerado"<< endl;
        }
        return 0;
    }