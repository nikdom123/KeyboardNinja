#include "func.h"

#define X 40
#define Y 10

int time(int i, int sims, double duration)
{
    double Ttime;
    switch (i) {
    case 1:
        Ttime = (double)(sims * 1);
        break;
    case 2:
        Ttime = (double)(sims * 0.3);
        break;
    case 3:
        Ttime = (double)(sims * 0.1);
        break;
    }
    cout << " \t\t\t\tteoretical time: " << Ttime << " seconds" << endl;
    cout << " \t\t\t\tyour value: " << duration << " seconds" << endl;
    if (duration <= Ttime)
        return 0;
    else
        return 1;
}

int correctness(int i, int sims, int mistakes)
{
    int Tcorrect;
    switch (i) {
    case 1:
        Tcorrect = 50;
        break;
    case 2:
        Tcorrect = 80;
        break;
    case 3:
        Tcorrect = 99;
        break;
    }
    int Rcorrect = ((double)(sims - mistakes) / sims) * 100;
    cout << " \n\n\t\t\t\tteoretical correctness: " << Tcorrect << "%" << endl;
    cout << " \t\t\t\tyour value: " << Rcorrect << "%" << endl;
    if (Rcorrect >= Tcorrect)
        return 0;
    else
        return 1;
}

int spers(int i, int sims, double duration)
{
    double Tspers;
    switch (i) {
    case 1:
        Tspers = 100;
        break;
    case 2:
        Tspers = 200;
        break;
    case 3:
        Tspers = 400;
        break;
    }
    double Rspers = sims / (duration / 60);
    cout << " \n\n\t\t\t\tteoretical symbols per minute: " << Tspers << endl;
    cout << " \t\t\t\tyour value: " << Rspers << endl;
    if (Rspers >= Tspers)
        return 0;
    else
        return 1;
}

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
    result = time(i, sims, duration);
    result += correctness(i, sims, mistakes);
    result += spers(i, sims, duration);
    cout << " \n\n\t\t\t\tnumber of mistakes: " << mistakes << endl;
    cout << " \t\t\t\tmaximum error free series: " << max_series << endl;
    if (result == 0)
        cout << " \n\t\t\tYou have passed this level of difficulty \n\n";
    else
        cout << " \n\t\t\tYou could not pass this level of difficulty \n\n";
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
    double duration, spers, correct, Tcorrect, Ttime;
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
    switch (i) {
    case 1:
        Tcorrect = 50;
        Ttime = (double)(sims * 1);
        break;
    case 2:
        Tcorrect = 80;
        Ttime = (double)(sims * 0.3);
        break;
    case 3:
        Tcorrect = 99;
        Ttime = (double)(sims * 0.1);
        break;
    }
    if (series > max_series) // re-check: if no errors were made
        max_series = series;
    duration = (clock() - start) / (double)CLOCKS_PER_SEC;
    spers = sims / (duration / 60);
    correct = ((double)(sims - mistakes) / sims) * 100;

    system("CLS");
    position = {0, Y};
    SetConsoleCursorPosition(hConsole, position);
    cout << "\n\n \t\t\t\tTeoretical correctness: " << Tcorrect << endl;
    cout << " \t\t\t\tTeoretical time" << Ttime << endl;
    cout << "\n\n \t\t\t\tCorrectness : " << correct << " %" << endl;
    cout << " \t\t\t\ttime: " << duration << " seconds" << endl;
    cout << " \t\t\t\tnumber of mistakes: " << mistakes << endl;
    cout << " \t\t\t\tmaximum error free series: " << max_series << endl;
    cout << " \t\t\t\tsymbols per minute: " << spers << endl << "\n\n";
    system("pause");
}
