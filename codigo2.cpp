#include <iostream>
using namespace std;

//funçao que imprime a mensagem de escolha 
void opcaoUm() {
    cout << "Voce escolher a opçao 1." << endl;
}
void opcaoDois(){
    cout << "Voce escolher a opcao 2." << endl;
}
void opcaoTres (){
    cout << "Voce escolher a opcao 3." << endl;
}
int main () {
    int escolha;
    do {
        // menu
        cout << "=== Menu ===" << endl;
        cout <<"1. Opção 1" << endl;
        cout <<"2. Opção 2" << endl;
        cout <<"3. Opção 3" << endl;
        cout <<"4. Sair" << endl;
        cout <<" Escolha uma Opção: ";
        cin >> escolha;
        // Switch case para as opçoes do menu

        int main(){
            do {
                cin >> escolha;
                //switch case para as opçoes do menu
                Switch (escolha) {
                    case 1;
                    opcaoUm();
                    break;

                    case 2;
                    opcaoDois();
                    break;

                    case 3;
                    opcaoTres();
                    break;

                    case 4;
                    cout << "PRograma encerrado. " << endl;
                    break;
                    default:
                    cout << "Opção invalida, tente novamente. " << endl;
                    break;
                }
            } while (Escolha !=4);
            return 0;

        }            
                    
