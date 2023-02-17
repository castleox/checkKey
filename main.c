#include <stdio.h>
#include <windows.h>


void checkKey();

void checkKey(){
    // appArm--;
    system("CLS");
    system("COLOR 16");
    printf("AppArmor Security System (TM) V1.0.2 Davide Castelli 3 Sirio Informatica\n");
    printf("\n");
    printf("\n");
    printf("\n");
    printf("=================================================================================\n");
    printf(" | E' stato inserito un carattere non valido, il programma e'avvelenato         |\n");
    printf(" | Sono rimasti soltanto %d tentativi                                           |\n", appArm);
    printf(" | Esauriti i tentativi, il PC verra' disattivato come punizione                |\n");
    printf(" | per aver inserito caratteri a caso senza seguire le indicazioni.             |\n");
    printf("=================================================================================\n");
    while (appArm>0)
    {
        system("PAUSE");
        system ("CLS");
        system("COLOR 02");
        main();
    }
    {
        system("cls");
        printf("Sei stanco, vai a dormire e copriti bene....");
        system("shutdown -s -t 15");
    }
}