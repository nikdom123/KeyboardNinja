#include "func.h"

void Eng()
{
    srand(time(NULL));
    int l = rand() % 10, k = 0;
    FILE* eng;
    eng = fopen("src/eng.txt", "r");
    char sim;
    string str, uns;
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
    getline(cin, uns);

    cout << uns;
    int n = str.size();
    k = 0;
    for (l = 0; l < n; l++) {
        if (str[l] != uns[l])
            k++;
    }
    cout << k << endl;
    system("pause");
}
void Rus()
{
    system("chcp 1251");
    srand(time(NULL));
    int l = rand() % 10, k = 0;
    cout << endl << l << endl;
    FILE* rus;
    rus = fopen("src/rus.txt", "r");
    char sim;
    string str, uns;
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
    getline(cin, uns);
    cout << uns;
    int n = str.size();
    k = 0;
    for (l = 0; l < n; l++) {
        if (str[l] != uns[l])
            k++;
    }
    cout << k << endl;
    system("pause");
}