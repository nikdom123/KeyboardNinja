#include "menu.h"

#define X 40
#define Y 10

void Level(int a)
{
}

void Language()
{
    char ch = 0;
    system("CLS");
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    COORD position = {X, Y - 3};
    SetConsoleCursorPosition(hConsole, position);
    cout << "---Choose language of the text---";
    SetConsoleTextAttribute(hConsole, (WORD)((15 << 4) | 0));
    position = {X, Y + 1};
    SetConsoleCursorPosition(hConsole, position);
    cout << "            English text        ";
    SetConsoleTextAttribute(hConsole, (WORD)((0 << 4) | 15));
    position = {X, Y + 2};
    SetConsoleCursorPosition(hConsole, position);
    cout << "            Russian text        ";
    position = {X, Y + 3};
    SetConsoleCursorPosition(hConsole, position);
    cout << "                Exit            ";
    int i = 1;
    while (ch != 13) {
        ch = _getch();
        position = {X, (short int)(Y + i)};
        SetConsoleCursorPosition(hConsole, position);
        SetConsoleTextAttribute(hConsole, (WORD)((0 << 4) | 15));
        switch (i) {
        case 1:
            cout << "            English text        ";
            break;
        case 2:
            cout << "            Russian text        ";
            break;
        case 3:
            cout << "                Exit            ";
            break;
        }
        ch == 72 ? i-- : ch == 80 ? i++ : i;
        i = i > 3 ? 1 : i < 1 ? 3 : i;
        position = {X, (short int)(Y + i)};
        SetConsoleCursorPosition(hConsole, position);
        SetConsoleTextAttribute(hConsole, (WORD)((15 << 4) | 0));
        switch (i) {
        case 1:
            cout << "            English text        ";
            break;
        case 2:
            cout << "            Russian text        ";
            break;
        case 3:
            cout << "                Exit            ";
            break;
        }
        SetConsoleTextAttribute(hConsole, (WORD)((0 << 4) | 15));
    }
}

void Menu()
{
    Language();
    system("pause");
}