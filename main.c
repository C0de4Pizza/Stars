#include <stdio.h>
#include <stdlib.h>
#include "console.h"

int main() {
    int e,h,b,i,t;
    textcolor(5);
    printf("\n geben sie ein wie viele sterne gezeichnet werden sollen: ");
    scanf("%d",&e);
    printf("\n in welcher unterschiedlichen ms zeit sollen die sterne erscheinen?: ");
    scanf("%d",&t);
    system("cls");
    for( i = 0; i < e; i++){
        textcolor(rand()%16);
        gotoxy(h,b);
        h=rand()%100;
        b=rand()%100;
        delay(t);
        printf("*");
    }

    char ja;
    printf("\n wollen sie beenden?Ja(j) / Nein(n): ");
    ja = getch();

    switch(ja){
        case 106:
            system("cls");
            break;
        case 110:
            //printf("ok dann bleib allein in der Console");
            break;
    }
    return 0;
}
