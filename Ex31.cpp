#include <iostream>

using namespace std;

int main() {
    int num, posicao = 0;

    cout << "Digite um numero: ";
    cin >> num;

    
    if (num == 0) {
        cout << "O numero 0 nao possui bits setados em 1." << endl;
    } else {
        
        while ((num & 1) == 0) {
            num = num >> 1; 
            posicao++;      
        }

        
        cout << "A menor ordem do bit setado para 1 e a posicao: " << posicao + 1 << endl;
    }

    return 0;
}
