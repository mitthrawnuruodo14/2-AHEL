#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    float hoehe = 0;
    float breite = 0;
    
    printf("Bitte gib die Breite ein: \n");
    scanf("%f", &breite);
    printf("Gib die Höche ein : \n");
    scanf("%f", &hoehe);
    
    if (hoehe == breite) {
    printf("Die Höche ist gleich groß wie die Breite\n");
    }
    float flaecheninhalt = hoehe*breite;
    float umfang = (2*hoehe)+(2*breite);
    
    printf("Der Flächeninhalt beträgt %2f und der Umfang beträgt %2f\n",flaecheninhalt,umfang );
    return 0;
}
//Ordner nicht commiten try 1