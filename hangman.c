#include <stdio.h>

int main(void) {
    const char secret = "x";
    const char guess = "y";
    if(secret == guess){
        printf("Du lagst richtig %c",secret);
    }else{
        printf("Fail");
    }
    printf("Hello World");
    return 0;
}
