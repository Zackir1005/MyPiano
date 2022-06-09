#include <iostream>
#include<conio.h>
#include "windows.h"
using namespace std;


int voice() {
    bool q = false;

    while (!q) {
        switch (_getch()) {
        case 'w': {system;
            Beep(400, 100);
            cout << " ________ \n";
            cout << "|########|\n";
            cout << "|########|\n";
            cout << "|########|\n";
            cout << "|########|\n";
            cout << "|########|\n";
            cout << "|########|\n";
            cout << "|########|\n";
            cout << "|########|\n";
            cout << "|________|\n";
            system("cls");
        }  break;
        case 'e': {system;
            Beep(450, 100);
            cout << "           ________ \n";
            cout << "          |########|\n";
            cout << "          |########|\n";
            cout << "          |########|\n";
            cout << "          |########|\n";
            cout << "          |########|\n";
            cout << "          |########|\n";
            cout << "          |########|\n";
            cout << "          |########|\n";
            cout << "          |________|\n";
            system("cls");
        }  break;
        case 'r': {system;
            Beep(500, 100);
            cout << "                     ________ \n";
            cout << "                    |########|\n";
            cout << "                    |########|\n";
            cout << "                    |########|\n";
            cout << "                    |########|\n";
            cout << "                    |########|\n";
            cout << "                    |########|\n";
            cout << "                    |########|\n";
            cout << "                    |########|\n";
            cout << "                    |________|\n";
            system("cls");        }  break;
        case 't': {system;
            Beep(540, 100);
            cout << "                               ________ \n";
            cout << "                              |########|\n";
            cout << "                              |########|\n";
            cout << "                              |########|\n";
            cout << "                              |########|\n";
            cout << "                              |########|\n";
            cout << "                              |########|\n";
            cout << "                              |########|\n";
            cout << "                              |########|\n";
            cout << "                              |________|\n";
            system("cls");
        }  break;
        case 'y': {system;
            Beep(600, 100);
            cout << "                                         ________ \n";
            cout << "                                        |########|\n";
            cout << "                                        |########|\n";
            cout << "                                        |########|\n";
            cout << "                                        |########|\n";
            cout << "                                        |########|\n";
            cout << "                                        |########|\n";
            cout << "                                        |########|\n";
            cout << "                                        |########|\n";
            cout << "                                        |________|\n";
            system("cls");
        }  break;
        case 'u': {system;
            Beep(640, 100);
            cout << "                                                   ________ \n";
            cout << "                                                  |########|\n";
            cout << "                                                  |########|\n";
            cout << "                                                  |########|\n";
            cout << "                                                  |########|\n";
            cout << "                                                  |########|\n";
            cout << "                                                  |########|\n";
            cout << "                                                  |########|\n";
            cout << "                                                  |########|\n";
            cout << "                                                  |________|\n";
            system("cls");
        }  break;
        case 'i': {system;
            Beep(700, 100);
            cout << "                                                             ________ \n";
            cout << "                                                            |########|\n";
            cout << "                                                            |########|\n";
            cout << "                                                            |########|\n";
            cout << "                                                            |########|\n";
            cout << "                                                            |########|\n";
            cout << "                                                            |########|\n";
            cout << "                                                            |########|\n";
            cout << "                                                            |########|\n";
            cout << "                                                            |________|\n";
            system("cls");
        }  break;

        case 'q': q = true;
            cout << "\nBYE - BYE!\n";
        }
    }
    return q;
}

int main() {
    setlocale(LC_ALL, "Russian");

    cout << "Для воспроизведения звука, нажмите эти клавиши: \n";
    cout << "     W          E          R           T          Y          U          I     \n";
    voice();

    return 0;
}