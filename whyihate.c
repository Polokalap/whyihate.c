#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <stdlib.h>
#include <unistd.h>

void clearConsole() {
    #ifdef _WIN32
        system("cls");
    #else
        system("clear");
    #endif
}

int main() {
    printf("Why I hate C\nBy Polokalap\n");

    char lang[10];
    bool isLangSet = false;
    int langC;

    do {
        printf("\nSelect the language[en]/Válaszd ki a nyelvet[hu]: ");
        scanf("%9s", &lang);

        if (strcmp(lang, "en") == 0) {
                isLangSet = true;
                langC = 1;
        }
        if (strcmp(lang, "hu") == 0) {
                isLangSet = true;
                langC = 2;
        }
        
    } while (isLangSet == false);

    clearConsole();

    switch (langC) {
        case 1:
            printf("Before I start my rant on C, let's talk About why I Like it!\n");
            printf("- It's fast af\n");
            printf("- Most languages are inspired by C so it's easier to learn them\n");
            printf("- It's lower level than python or java\n");
            printf("\nand let's talk about why I hate it:\n");
            printf("- confusing af and hard to understand\n");
            printf("\t- I wasted like 45 minutes trying to figure out how to make the language selector.\n");
            printf("- I just don't like it's syntax.\n");
            printf("\t- I know it's a me thing, but this program is called why I hate C. not why most people don't like C.\n");
            break;
        case 2:
            printf("Mielőtt elkezdek arról beszélni, hogy miért utálom, itt van pár dolog, hogy miért szeretem.\n");
            printf("- Nagyon gyors.\n");
            printf("- A legtöbb nyelvet a C inspirálta, szóval könnyebb őket megtanulni.\n");
            printf("- \"alacsonyabb szintű\" mint a java\n");
            printf("\nMiért utálom:\n");
            printf("- Nehéz megérteni\n");
            printf("\t- 45 percen keresztül szenvedtem a nyelv kiválasztóval.\n");
            printf("- Nem tetszik a szintaxis.\n");
            printf("\t- Tudom, hogy ez velem egy probléma, de a program neve az hogy miért én utálom, nem a többi ember.\n");
            break;
    }

    sleep(7);
    
}
