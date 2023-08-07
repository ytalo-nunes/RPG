#include <iostream>
#include <time.h>

using namespace std;

void imprimeDado(int result){
    
    if(result == 1){
        cout <<" -----------\n"<<"|           |\n"<<"|           |\n"<<"|     O     |\n"
             <<"|           |\n"<<"|           |\n"<<" -----------\n";
    }
    else if(result == 2){    
        cout <<" -----------\n"<<"| O         |\n"<<"|           |\n"
             <<"|           |\n"<<"|           |\n"<<"|         O |\n"<<" -----------\n";
    }
    else if(result == 3){
            cout <<" -----------\n"<<"| O         |\n"<<"|           |\n"<<"|     O     |\n"
            <<"|           |\n"<<"|         O |\n"<<" -----------\n";

    }
    else if(result == 4){
            cout <<" -----------\n"<<"| O       O |\n"<<"|           |\n"<<"|           |\n"
                 <<"|           |\n"<<"| O       O |\n"<<" -----------\n";

    }
    else if(result == 5){
            cout <<" -----------\n"<<"| O       O |\n"<<"|           |\n"<<"|     O     |\n"
                 <<"|           |\n"<<"| O       O |\n"<<" -----------\n";

    }
    else if(result == 6){
            cout <<" -----------\n"<<"| O       O |\n"<<"|           |\n"<<"| O       O |\n"
                 <<"|           |\n"<<"| O       O |\n"<<" -----------\n";

    }
}
int main(){

    int result;

    srand(time(NULL));
    
    imprimeDado(result = rand()%6+1);
    

    system("pause");
    return 0;

}
