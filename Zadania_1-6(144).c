#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#define liczba 60
using namespace std;

double szescian(double parametr) {
    return (parametr * parametr * parametr);
}
int main()
{
    // Autor Krystian Kręcik
    printf("Zadanie 1\n");
    printf("Podaj liczbe minut\n");
    int godzina,liczba_h=0;
    scanf("%d", &godzina);
    while (godzina > liczba) {
        godzina -= liczba;
        liczba_h++;
    }
    (liczba_h>0) ? printf("Wynik to %d godziny %d minuty\n", liczba_h, godzina) : printf("Wynik to %d minuty\n", godzina);
    
    printf("Zadanie 2\n");
    printf("Podaj liczbe\n");
    int liczba_0, i=0;
    scanf("%d", &liczba_0);
    while (i++ <= 10) {
        printf("%d\n", liczba_0++);
    }
    
    printf("Zadanie 3\n");
    printf("Podaj liczbe dni\n");
    int dni, tygodnie=0;
    scanf("%d", &dni);
    while (dni > 7) {
        dni -= 7;
        tygodnie++;
    }
    tygodnie > 0 ? printf("Wynik to %d tygodne i %d dni\n", tygodnie, dni) : printf("Wynik to %d dni\n", dni);
    
    printf("Zadanie 4\n");
    printf("Ile dni pracujesz?\n");
    int liczba_dni, suma=0;
    scanf("%d", &liczba_dni);
    while (liczba_dni > 0) {
        suma += liczba_dni;
        liczba_dni--;
    }
    printf("Zarobisz %d zl\n", suma);
    
    printf("Zadanie 5\n");
    printf("Podaj liczbe\n");
    int liczba_1, wynik=0;
    scanf("%d", &liczba_1);
    while (liczba_1 > 0) {
        wynik += (liczba_1 * liczba_1);
        liczba_1--;
    }
    printf("Wynik to %d\n", wynik);
    
    printf("Zadanie 6\n");
    printf("Podaj liczbe zmiennoprzecinkowa\n");
    double parametr;
    scanf("%lf", &parametr);
    printf("Wynik to %lf", szescian(parametr));

}
