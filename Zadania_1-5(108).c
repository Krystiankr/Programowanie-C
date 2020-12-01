#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
using namespace std;
int main()
{
    // Autor Krystian Kręcik
    printf("Zadanie 1\n");
    char imie1[20];
    char nazwisko[20];
    printf("Podaj imie: ");
    scanf("%s", &imie1);
    printf("Podaj nazwisko: ");
    scanf("%s", &nazwisko);
    printf("Nazywasz sie %s %s\n\n", &nazwisko, &imie1);

    printf("Zadanie 2a\n");
    char imie2[20];
    printf("Podaj imie: ");
    scanf("%s", &imie2);
    printf("Twoje imie to \"%s\"\n", &imie2);

    printf("Zadanie 2b\n");
    printf("\"%20s\"\n", &imie2);

    printf("Zadanie 2c\n");
    printf("\"%-20s\"\n", &imie2); 
    
    printf("Zadanie 2d\n");
    printf("\"%s%3s\"\n\n", &imie2, "");
   
    printf("Zadanie 3\n");
    printf("Podaj liczbe zmienno przecinkowa\n");
    float zmienno;
    scanf("%f", &zmienno);
    printf("Podano liczbe %.1f lub %e\n\n", zmienno, zmienno);
    
    int wzrost;
    char imie3[20];
    printf("Zadanie 3\n");
    printf("Podaj wzrost w centymetrach\n");
    scanf("%d", &wzrost);
    printf("Podaj imie\n");
    scanf("%s", &imie3);
    printf("%s, masz %.2f metra wzrostu.\n\n", &imie3, (float)wzrost/100);
    
    char imie4[20];
    char nazwisko2[20];
    printf("Zadanie 5\n");
    printf("Podaj imie i nazwisko\n");
    scanf("%s %s", &imie4, &nazwisko2);
    printf("%s %s\n", &imie4, &nazwisko2);
    printf("%*d %*d\n", strlen(imie4), strlen(imie4), strlen(nazwisko2), strlen(nazwisko2));
    printf("%s %s\n", &imie4, &nazwisko2);
    printf("%-*d %-*d", strlen(imie4), strlen(imie4), strlen(nazwisko2), strlen(nazwisko2));
}
