#include <stdio.h>

int main(int argc,char* argv[]) 
{
    int Volljearig = 18;
    int alter;
    printf("Gib dein Alter an: ");
    scanf("%d",&alter);
    if (alter < Volljearig)
    {
        printf("\nDu bist nicht altgenug\n");
    }
    if(alter > Volljearig)
    {
    printf("Du bist altgenug\n");
    }
    // Hallo Git 5 time
    
    return 0;
}