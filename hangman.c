#include <stdio.h>

int vergleicher(guess,secret) { for(int i = 0; i < 30;i++ ){
        if (guess[i] == secret[i]){
            printf(" %c",guess[i]);
        }else{printf("x");}
    }return 0;}

int main(void) {
    const char secret[30] = "x";
    char guess[30] ;
    printf("dein Buchstabe: \n");
    if (scanf("%s",guess) != 1){
        printf("Unglültige eingabe");
        return 1;
    }
    
    if(vergleicher){
        printf("Du lagst richtig %s\n",secret);
    }else{
        printf("Fail\n");
    }
    printf("Hello World\n");
    return 0;
}
