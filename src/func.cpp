#include "func.h"

void Eng(){
    srand(time(NULL));
    int l = rand()%11, k = 0;
    FILE *eng;
    eng = fopen("src/eng.txt","r");
    char sim;
    string str;
    while((sim = getc(eng)) != EOF){
        if(k == l){
            while(sim != '\n' && sim != EOF){
                str += sim;
                sim = getc(eng);
            }
            break;
        }
        if(sim == '\n')
            k++;
    }
    fclose(eng);
    cout << str;
    cout<<"\n";
    system("pause");
}
// void Rus(){
//     setlocale(LC_ALL, "Rus");
//     srand(time(NULL));
//     int l = rand()%11, k = 0;
//     cout<< endl<< l<< endl;
//     FILE *rus;
//     rus = fopen("src/rus.txt","r");
//     char sim;
//     string str;
//     while((sim = getc(rus)) != EOF){
//         if(k == l){
//             while(sim != '\n' && sim != EOF){
//                 str += sim;
//                 sim = getc(rus);
//             }
//             break;
//         }
//         if(sim == '\n')
//             k++;
//     }
//     fclose(rus);
//     cout << str;
//     cout<<"\n";
//     system("pause");
// }