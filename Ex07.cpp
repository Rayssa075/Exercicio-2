#include <iostream>
using namespace std;

int main () {

    float preço_do_produto = 0;

    cout<< "Digite o preço do produto: ";

    cin>> preço_do_produto;



    float codigo_de_origem = 0;

    cout<< "Digite o código de origem do produto: ";

    cin>> codigo_de_origem;

if (codigo_de_origem ==1) {

    cout<< "O produto é nascional e foi fabricado no Sul do país." << endl;

} else if (codigo_de_origem ==2) {

    cout<< "Oproduto é nascional e foi fabricado no Norte do país." << endl;

} else if ( codigo_de_origem ==3) {

    cout<< "O produto é nascional e foi fabricado no Leste do país." << endl;

} else if ( codigo_de_origem == 4) {

    cout<< "O pruduto é nasvional e foi fabricado no Oeste do país." << endl;

} else if ( codigo_de_origem == 5 || codigo_de_origem ==6) {

    cout<< "O produto é nascional e foi fabricado no Nordeste do país." << endl;

} else if ( codigo_de_origem == 7 || codigo_de_origem ==8 || codigo_de_origem ==9) {

    cout << "O produto é nascional e foi fabricado no Sudeste do país. " << endl;

} else if (codigo_de_origem >=10 && codigo_de_origem <= 20) {

    cout<< "O produto é nasconal e foi fabricado no  Nordeste do país" << endl;

} else if ( codigo_de_origem >=21 && codigo_de_origem <=30) {

    cout<< "O produto é nascional e foi fabricado no Nordeste do país." << endl;

}



return 0;

}