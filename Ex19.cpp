#include <iostream>
using namespace std;
int main () {

   
   int dia_1, mês_1, ano_1;
    cout<<"Digite a data 1:";
     cin>>dia_1;
    cout<<"Digite o mês 1:";
    cin>> mês_1;
    cout<<"Digite o ano 1:";
    cin>> ano_1;

    int dia_2, mês_2, ano_2;
    cout<<"Digite o dia 2:";
    cin>> dia_2;
    cout<<"Digite o mês 2:";
    cin>> mês_2;
    cout<<"Digite o ano 2:";
    cin>> ano_2;





    if (dia_1> dia_2) {
        cout<<dia_1<<"/"<<mês_1<<"/"<<ano_1<<endl;
    }
    else if (dia_2 > dia_1) {
        cout<<dia_2<<"/"<<mês_2<<"/"<<ano_2<<endl;
    }
    else if (mês_1 > mês_2) {
       cout<<dia_1<<"/"<<mês_1<<"/"<<ano_1<<endl;
    }
    else if ( mês_2 > mês_1) {
         cout<<dia_2<<"/"<<mês_2<<"/"<<ano_2<<endl;
    }
    else if (ano_1 > ano_2) {
        cout<<dia_1<<"/"<<mês_1<<"/"<<ano_1<< endl;
    }
    else if (ano_2 > ano_1) {
        cout <<dia_2<<"/"<<mês_2<<"/"<<ano_2<<endl;
    }
    else{
        cout<< "As datas são iguais"<<endl;
    }

    return 0;
    }

    







}