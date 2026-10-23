#include <stdio.h>


int main() {
    const char secret[] = "geheim";
    //#########################
    char guess;
    const int len = sizeof(secret)-1;
    char guessed[len];
    int hits = 0;
    //varibale initialisieren: _ _ _ _ _ _
    printf("Das Wort hat %d Buchstaben\n", len);
    for (int i = 0; i < len; i++) {
        guessed[i] = '_';
    }
    
    printf("Rate eine Buchstaben: ");
    if(scanf("%c", &guess) !=1) {
        printf("Keine Eingabe\n");
        return 1;
    }
    for (int i = 0; i < len ; i++) {
        if (guess == secret[i]){
            hits++;
            guessed[i] = guess;
            
        }
    }
    for (int i = 0; i < len; i++) {
        printf("%c ", guessed[i]);
    }
    printf("Treffer:%d\n", hits);
    //########################
    return 0;
}

