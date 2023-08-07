#include <iostream>
#include <Windows.h>
#include "menuAction.h"

void lifeBar(){
    std::cout<<"Sua barra de vida: \n"<<" --------------"<<std::endl<<"|**|**|**|**|**|"<<std::endl<<" --------------"<<std::endl;
};
void MenuDeAcao() {
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

    std::cout << "Que acao deseja realizar:\n";
    SetConsoleTextAttribute(hConsole, FOREGROUND_RED);

    std::cout << "1>Atacar!" << std::endl;

    SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN);

    std::cout << "2>Defender." << std::endl;

    SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN );

    std::cout << "3>inventario." << std::endl;
    SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
    
    std::cout << "4>Fugir." << std::endl << std::endl;

}