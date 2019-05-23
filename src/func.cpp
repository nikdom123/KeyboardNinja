#include "func.h"

void Eng(int i)
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
        break;
    case 3:
        break;
    }
    if (series > max_series) // re-check: if no errors were made
        max_series = series;
    duration = (clock() - start) / (double)CLOCKS_PER_SEC;
    spers = sims / (duration / 60);
    correct = ((double)(sims - mistakes) / sims) * 100;
    cout << "\n\n Teoretical correctness: " << Tcorrect << endl;
    cout << "Teoretical time" << Ttime << endl;

    cout << "\n\n Correctness : " << correct << " %" << endl;
    cout << " time: " << duration << " seconds" << endl;
    cout << " number of mistakes: " << mistakes << endl;
    cout << " maximum error free series: " << max_series << endl;
    cout << " symbols per minute: " << spers << endl;
    system("pause");
}

void Rus(int i)
{
    system("chcp 1251");
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
        break;
    case 3:
        break;
    }
    if (series > max_series) // re-check: if no errors were made
        max_series = series;
    duration = (clock() - start) / (double)CLOCKS_PER_SEC;
    spers = sims / (duration / 60);
    correct = ((double)(sims - mistakes) / sims) * 100;
    cout << "\n\n Teoretical correctness: " << Tcorrect << endl;
    cout << "Teoretical time" << Ttime << endl;

    cout << "\n\n Correctness : " << correct << " %" << endl;
    cout << " time: " << duration << " seconds" << endl;
    cout << " number of mistakes: " << mistakes << endl;
    cout << " maximum error free series: " << max_series << endl;
    cout << " symbols per minute: " << spers << endl;
    system("pause");
}
