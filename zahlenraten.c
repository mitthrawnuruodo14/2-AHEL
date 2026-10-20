#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(void) 
{   
    
    int liste[] = {10,11,12,13,};
    for (int i = 0 ; i < sizeof(liste)/sizeof(liste[0]) ; i++) {
        printf("%d\n",liste[i]);
    }

            
    return 0;
}
