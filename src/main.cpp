#include "func.h"
#include <iostream>
#include <locale.h>
#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <time.h>
#include <windows.h>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Rus");
    Eng();
    cout << endl;
    Rus();
    return 0;
}