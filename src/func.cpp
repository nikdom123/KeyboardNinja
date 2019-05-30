#include "func.h"
#include "compare.h"

#define X 40
#define Y 10

void Eng(int i)
{
    system("CLS");
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    COORD position = {0, Y};
    SetConsoleCursorPosition(hConsole, position);
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
    int n = str.size(), mistakes = 0, series = 0, max_series = 0, sims = 0;
    k = 0;
    l = 0;
    clock_t start; // variable declaration
    double duration;
    start = clock(); // start "timer"
    while (l < n) {
        ch = _getch();
        if (ch == 27) { // if the key Esc is pressed
            break;      // then exit
        }
        if (str[l] == ch) { // if the correct character is entered
            l++;            // then text promotion,
            sims++;
            cout << ch;
            series++;
        } else { // if the wrong key is pressed
            Beep(523, 100);
            mistakes++;
            sims++;
            if (series > max_series)
                max_series = series;
            series = 0;
        }
    }
    duration = (clock() - start) / (double)CLOCKS_PER_SEC;
    if (series > max_series) // re-check: if no errors were made
        max_series = series;
    system("CLS");
    position = {0, Y};
    SetConsoleCursorPosition(hConsole, position);

    int result;
    result = c_time(i, sims, duration);
    result += c_correct(i, sims, mistakes);
    result += c_spers(i, sims, duration);
    cout << "\n\t\t\t\t number of mistakes: " << mistakes << endl;
    cout << "\t\t\t\t maximum error free series: " << max_series << endl;
    if (result == 0)
        cout << "\n\t\t\t You have passed this level of difficulty \n\n";
    else
        cout << "\n\t\t\t You could not pass this level of difficulty \n\n";
    system("pause");
}

void Rus(int i)
{
    system("chcp 1251");
    system("CLS");
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    COORD position = {0, Y};
    SetConsoleCursorPosition(hConsole, position);
    srand(time(NULL));
    int l = rand() % 10, k = 0;
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
    int n = str.size(), mistakes = 0, series = 0, max_series = 0, sims = 0;
    k = 0;
    l = 0;
    clock_t start; // variable declaration
    double duration;
    start = clock(); // start "timer"
    while (l < n) {
        ch = _getch();
        if (ch == 27) { // if the key Esc is pressed
            break;      // then exit
        }
        if (str[l] == ch) { // if the correct character is entered
            l++;            // then text promotion,
            sims++;
            cout << ch;
            series++;
        } else { // if the wrong key is pressed
            Beep(523, 100);
            mistakes++;
            sims++;
            if (series > max_series)
                max_series = series;
            series = 0;
        }
    }
    duration = (clock() - start) / (double)CLOCKS_PER_SEC;
    if (series > max_series) // re-check: if no errors were made
        max_series = series;
    system("CLS");
    position = {0, Y};
    SetConsoleCursorPosition(hConsole, position);

    int result;
    result = c_time(i, sims, duration);
    result += c_correct(i, sims, mistakes);
    result += c_spers(i, sims, duration);
    cout << "\n\t\t\t\t number of mistakes: " << mistakes << endl;
    cout << "\t\t\t\t maximum error free series: " << max_series << endl;
    if (result == 0)
        cout << "\n\t\t\t You have passed this level of difficulty \n\n";
    else
        cout << "\n\t\t\t You could not pass this level of difficulty \n\n";
    system("pause");
}
