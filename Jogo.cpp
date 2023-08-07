#include <iostream>
#include <Windows.h>
#include "monstros.h"
#include "menuAction.h"
using namespace std;

int main(){
    string nome;
    int option;

    cout << "Voce acordou atordoado no meio de um floresta densa e escura"
         <<"\nao seu lado tem uma barra de ferro velha que voce prontamente pega para se proteger\n"
         <<"ao seu redor voce consegue enxergar apenas mato, e uma entranda para uma caverna escura";

    while(option != 3){
        
        cout <<"\n\nO que voce vai fazer?";
        cout <<"\n1>Entrar mata a dentro.\n2>Entrar na caverna.\n3>Voltar a dormir.";
    
        cin >> option;
 

        switch(option){
            
        case 1:
            cout << "Voce adentra na mata densa e acaba se cortando,"
                 <<"\npois eu esqueci de falar que alem de densa tbm eh espinhosa"
                 <<",\n todo mundo erra, vida que segue e voce tomou 10 de dano.";
                 break;
        case 2:
            cout <<"Voce andou um pouco e ve algo se mechendo"
                 <<" entao voce finge que nao e com voce e segue andand....\a";
        
            system("cls");
        
            monstroBat();
            cout << "Surge um monstro estranho com umas asas de morcego...," <<
                    "\nque olhando bem nao eh tao estranho, eh so um morcego gigante.....com chifres\n";
            lifeBar();
            MenuDeAcao(); 
                 break;
        case 3:
            cout << "ZZZZZZZZZZZZZZZ\n";
                system("pause");
        default:
            cout << "Digite uma opcao valida";
    }
  }
 
}