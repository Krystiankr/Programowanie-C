#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
using namespace std;

float wynik(float liczba_1, float liczba_2) {
    return (liczba_1 - liczba_2) / (liczba_1 * liczba_2);
}

int potega(int liczba, int potega) {
    int suma=1;
    for (int i = 0; i < potega; i++) {
        suma = (suma * liczba);
    }
    return suma;
}

int main()
{
    // Autor Krystian Kręcik
    
    printf("Zadanie 1\n");
    char tab[26];
    tab[0] = 97;
    for (int i = 0; i < 26; i++) {
        tab[i] = 97 + i;
        printf("%c ", tab[i]);
    }

    printf("\n\nZadanie 2");
    for (int i = 0; i < 6; i++) {
        for (int j = 0; j < i; j++) {
            printf("$");
        }
        printf("\n");
    }

    printf("\nZadanie 3");
    char tab1[7];
    for (int i = 0; i < 7; i++) {
        tab1[i] = 70 - i;
        for (int j = 0; j < i; j++) {
            printf("%c", tab1[j]);
        }
        printf("\n");
    }

    printf("\nZadanie 4\n");
    printf("Podaj literke\n");
    char znak;
    scanf("%c", &znak);
    char tab2[20];
    for (int i = 0; i < (znak + 1 - 'A'); i++) {
        tab2[i] = 65 + i;
        for (int k = 0; k < (znak + 1 - 'A') - (i+1); k++) {
            printf(" ");
        }
        for (int j = 0; j <= i; j++) {
            printf("%c", tab2[j]);
        }
        for (int j = 1; j <= i; j++) {
            printf("%c", tab2[i-j]);
        }
        printf("\n");
    }

    printf("\nZadanie 5\n");
    printf("Podaj dolne ograniczenie: ");
    int dolne,gorne;
    scanf("%d", &dolne);
    printf("Podaj gorne ograniczenie: ");
    scanf("%d", &gorne);

    for (int i = dolne;i <= gorne; i++) {
        printf("%d %d %d\n", i, i * i, i* i* i);
    }

    printf("\nZadanie 6\n");
    printf("Podaj slowo: ");
    char slowo[20];
    scanf("%s", &slowo);
    for (int i = strlen(slowo); i >= 0; i--) {
        printf("%c", slowo[i]);
    }
    
    printf("\nZadanie 7\n");
    float liczba_1, liczba_2;
    printf("Podaj dwie liczby zmiennoprzecinkowe\n");
    while ((scanf("%f", &liczba_1) == 1) and (scanf("%f", &liczba_2) == 1)) {
        printf("Wynik to %f\n", (liczba_1 - liczba_2) / (liczba_1 * liczba_2));
        printf("Podaj dwie liczby zmiennoprzecinkowe\n");
    }
    
    printf("\nZadanie 8\n");
    float liczba_3, liczba_4;
    printf("Podaj dwie liczby zmiennoprzecinkowe\n");
    while ((scanf("%f", &liczba_3) == 1) and (scanf("%f", &liczba_4) == 1)) {
        printf("Wynik to %f\n", wynik(liczba_3, liczba_4));
        printf("Podaj dwie liczby zmiennoprzecinkowe\n");
    }
    
    printf("\nZadanie 9\n");
    int tablica_9[9];
    printf("Podaj 8 liczb calkowitych\n");
    for (int i = 0; i < 9; i++) {
        scanf("%d", &tablica_9[i]);
    }
    for (int i = 0; i < 9; i++) {
        printf("%d ", tablica_9[8 - i]);
    }
    
    printf("\nZadanie 10\n");
    int ograniczenie;
    printf("Podaj ograniczenie ciagu: ");
    scanf("%d", &ograniczenie);
    float suma_1=0, suma_2=0;
    for (int i = 1; i <= ograniczenie; i++) {
        suma_1 += (1 / float(i));
    }
    printf("Suma ciagu pierwszego: %f\n", suma_1);
    for (int i = 1; i <= ograniczenie; i++) {
        i % 2 == 0 ? suma_2 -= (1 / float(i)) : suma_2 += (1 / float(i));
    }
    printf("Suma ciagu drugiego: %f", suma_2);
    
    printf("\nZadanie 11\n");
    int tablica_11[8];
    for (int i = 0; i < 8; i++)
        tablica_11[i] = potega(2, i);
    int zmienna = 0;
    do {
        printf("%d ", tablica_11[zmienna++]);
    }     while (zmienna < 8);
    
    printf("\nZadanie 12\n");
    char ch;
    ch = getchar();
    char znak_3[20];
    int i = 0;
    while (ch != '\n') {
        znak_3[i++] = ch;
        ch = getchar();
    }
    for (int j = 0; j < i; j++)
        printf("%c", znak_3[i-j-1]);
    
    printf("\nZadanie 13\n");
    float Ewa = 0.1, suma_Ewy=100;
    float Kasia = 0.05, suma_Kasi=100;
    int licznik = 1;
    do {
        printf("Kwota inwestycji po %d roku:\n", licznik++);
        suma_Ewy += 100 * Ewa;
        suma_Kasi += suma_Kasi * Kasia;
        printf("Ewa: %f zl, Kasia: %f zl\n", suma_Ewy, suma_Kasi);
    } while (suma_Kasi < suma_Ewy);
    
    printf("\nZadanie 14\n");
    int licznik_1=0;
    float Jim = 1000000;
    while (Jim > 10) {
        Jim += Jim * 0.08;
        Jim -= 100000;
        licznik_1++;
    }
    printf("Uplynie %d lat zanim Jim oprozni swoje konto", licznik_1);
}
