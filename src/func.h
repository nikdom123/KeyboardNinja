#ifndef FUNC_H
#define FUNC_H
#include <conio.h>
#include <iostream>
#include <locale.h>
#include <stdio.h>
#include <string>
#include <time.h>
#include <windows.h>
using namespace std;

int time(int i, int sims, double duration);
int correctness(int i, int sims, int mistakes);
int spers(int i, int sims, double duration);
void Eng(int i);
void Rus(int i);

#endif
