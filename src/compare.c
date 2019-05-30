#include "compare.h"

int c_time(int i, int sims, double duration)
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
    printf("\n\t\t\t\t teoretical time: %6.2f seconds \n", Ttime);
    printf("\t\t\t\t your value: %6.2f seconds \n", duration);
    if (duration <= Ttime)
        return 0;
    else
        return 1;
}

int c_correct(int i, int sims, int mistakes)
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
    printf("\n\t\t\t\t teoretical correctness: %d%% \n", Tcorrect);
    printf("\t\t\t\t your value: %d%% \n", Rcorrect);
    if (Rcorrect >= Tcorrect)
        return 0;
    else
        return 1;
}

int c_spers(int i, int sims, double duration)
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
    printf("\n\t\t\t\t teoretical symbols per minute: %4.1f \n", Tspers);
    printf("\t\t\t\t your value: %4.1f \n", Rspers);
    if (Rspers >= Tspers)
        return 0;
    else
        return 1;
}
