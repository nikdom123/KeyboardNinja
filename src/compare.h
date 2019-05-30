#ifndef COMPARE_H
#define COMPARE_H
#include <conio.h>
#include <stdio.h>
#include <windows.h>

int c_time(int i, int sims, double duration); // conflict with 'time' in ctest.h
int c_correct(int i, int sims, int mistakes);
int c_spers(int i, int sims, double duration);

#endif
