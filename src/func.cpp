#include "func.h"

void Eng()
{
    srand(time(NULL));
    int l = rand() % 10, k = 0;
    FILE* eng;
    eng = fopen("Text/eng.txt", "r");
    char sim;
    string str; //, uns;
    while ((sim = getc(eng)) != EOF) {
        if (k == l) {
            while (sim != '\n' && sim != EOF) {
                str += sim;
                sim = getc(eng);
            }
            break;
        }
        if (sim == '\n')
            k++;
    }
    fclose(eng);
    cout << str;
    cout << "\n";
    char ch;
    int n = str.size(), mistakes = 0;
    k = 0;
    l = 0;
    while (l < n) {
        ch = _getch();
        if (ch == 27) { // if the key Esc is pressed
            break;      // then exit
        }
        if (str[l] == ch) { // if the correct character is entered
            l++;            // then text promotion
            cout << ch;
        } else
            mistakes++;
    }
    cout << "\n number of mistakes: " << mistakes << endl;
    system("pause");
}
void Rus()
{
    system("chcp 1251");
    srand(time(NULL));
    int l = rand() % 10, k = 0;
    cout << endl << l << endl;
    FILE* rus;
    rus = fopen("Text/rus.txt", "r");
    char sim;
    string str; //, uns;
    while ((sim = getc(rus)) != EOF) {
        if (k == l) {
            while (sim != '\n' && sim != EOF) {
                str += sim;
                sim = getc(rus);
            }
            break;
        }
        if (sim == '\n')
            k++;
    }
    fclose(rus);
    cout << str;
    cout << "\n";
    char ch;
    int n = str.size(), mistakes = 0;
    k = 0;
    l = 0;
    while (l < n) {
        ch = _getch();
        if (ch == 27) { // if the key Esc is pressed
            break;      // then exit
        }
        if (str[l] == ch) { // if the correct character is entered
            l++;            // then text promotion
            cout << ch;
        } else
            mistakes++;
    }
    cout << "\n number of mistakes: " << mistakes << endl;
    system("pause");
}
