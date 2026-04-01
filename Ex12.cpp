#include <iostream>
using namespace std;
int main () {
   int mês=0;
    cout<< "Digite o número correspondente ao mês:";
    cin>> mês;

   int Janeiro= 1, Fevereiro = 2, Março = 3, Abril = 4, Maio = 5, Junho = 6, Julho = 7, Agosto = 8, Setembro = 9, Outubro = 10, Novembro = 11, Dezembro = 12;

    if ( mês == 1) {
        cout<< "O mês é Janeiro e tem 31 dias." << endl;
 } else if ( mês == 2) {
        cout<< "O mês é Fereiro e tem 28 ou 29 dias." << endl;
 }  else if ( mês == 3) {
        cout<< "O mês é Março e tem 31 dias." << endl; }
        else if ( mês == 4) {
            cout<< "O mês é Abril e tem 30 dias." << endl;
        } else if ( mês == 5) {
            cout<< "O mês é Maio e tem 31 dias." << endl; }
            else if ( mês == 6) {
                cout<< "O mês é Junho e tem 30 dias." << endl;}
                else if ( mês == 7 ) {
                    cout<< "O mês é Julho e tem 31 dias." << endl;}
                    else if ( mês == 8) {
                        cout<< "O mês é Agosto e tem 31 dias." <<endl;}
                        else if ( mês == 9) {
                            cout<< " O mês é Setembro e tem 30 dias." << endl;}
                            else if ( mês == 10) {
                                cout<< "O mês é Outubro e tem 31 dias." << endl;}
                                else if ( mês == 11) {
                                    cout<< "O mês é Novembro e tem 30 dias." << endl;}
                                    else if ( mês == 12) {
                                        cout<< "O mês é Dezembro e tem 31 dias." << endl;}
                                        else if ( mês < 1 || mês > 12) {
                                            cout<< "Número de mês é invalido." << endl;}

                                            return 0;
                                        }
                                    