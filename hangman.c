#include <stdio.h>

int main(void) {
    const char secret = 'x';
    char guess ;
    printf("dein Buchstabe: \n");
    if (scanf("%c",&guess) != 1){
        printf("Unglültige eingabe");
        return 1;
    }
    if(secret == guess){
        printf("Du lagst richtig %c\n",secret);
    }else{
        printf("Fail\n");
    }
    printf("Hello World\n");
    return 0;
}
