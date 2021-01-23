#define _CRT_SECURE_NO_WARNINGS
#define pierwszy_prog 1200
#define drugi_prog 600
#define pierwszy_podatek 0.85
#define drugi_podatek 0.80
#define trzeci_podatek 0.75
#include <iostream>
#include <fstream>
#include <string>
#include <cstdio>
// Autor Krystian Kręcik
using namespace std;
char pobierz_pierwszy(void) {
    char ch;
    ch = getchar();

    return ch;
}
void powitanie() {
    printf("********************\n");
    printf("Podaj liczbe odpowiadajaca zadanej stawce wynagrodzenia lub opcji:\n");
    printf("a) 35 zl/godz.          b) 37 zl/godz.");
    printf("c) 40 zl/godz.          d) 45 zl/godz.");
    printf("q) wyjscie");
}

int main()
{
    FILE* fp;
    FILE* fp1;
    int c;
    int liczba_znakow = 0, licznik_2 = 1,liczba_d=0,liczba_m=0;
    int liczba_slow_4=0, liczba_spacji=0, licznik_4=0;
    char ch;
    fp = fopen("example.txt", "r");
    fp1 = fopen("example.txt", "r");
    while ((ch = fgetc(fp1)) != EOF) liczba_znakow++;
    printf("Zadanie 1\nLiczba znakow to: %d\n", liczba_znakow);
    printf("\nZadanie 2\n");

    while (1) {

        c = fgetc(fp);
        if (feof(fp)) {
            break;
        }
        if (int(c) == ' ') liczba_spacji++;
        if (int(c) >= 'A' and int(c) <= 'z') licznik_4++;
        if (int(c) == '\t') printf("(\\t:%d)", int(c));
        else if (int(c) == '\n') { printf("(\\n:%d)", int(c)); licznik_2 = 0; }
        else if (int(c) < 32) {
            printf("problem");
        }
        else {
            if (int(c) >= 'A' and int(c) <= 'Z') liczba_d++;
            if (int(c) >= 'a' and int(c) <= 'z') liczba_m++;
            printf("(%c:%d)", c, int(c));
        }
        
        if (not(licznik_2++ % 10)) printf("\n");
    }
    printf("\n\nZadanie 3\n");
    printf("Liczba duzych znakow: %d\n", liczba_d);
    printf("Liczba malych znakow: %d\n", liczba_m);
    printf("\nZadanie 4\n");
    printf("Srednia liczba znakow: %d\n", licznik_4/ liczba_spacji);

    fclose(fp);
    fclose(fp1);
  
    printf("\nZadanie 5\n");

    int proba = 50;
    char odpowiedz;
    int ost= proba;
    int licznik = 2;
    printf("Wybierz liczbe od 1 do 100 i sprobuje ja zgadnac\n");
    printf("Napisz t jesli zgadlem, w jesli twoja liczba jest wieksza i m jesli jest mniejsza od 50\n");
    while ((odpowiedz = getchar()) != 't') {
        
        if (odpowiedz == 'm')  (proba -= ost / (licznik++));
        else if (odpowiedz == 'w') (proba += ost / (licznik++));
        printf("Czy twoja liczba jest %d (roznica %d)", proba, proba);
        ost = proba;
    }
    printf("Udalo mi sie znalezc twoja odp\n");
 

    printf("\nZadanie 6\n");
    printf("%c", pobierz_pierwszy());

    printf("\nZadanie 7\n");
    int stawka, liczba_h, wynagrodzenie_1, netto_1;
    char wejscie_8;
    do {
        powitanie();
        scanf("%c", &wejscie_8);
    } while (wejscie_8 < 'a' or wejscie_8 > 'd');
    switch (wejscie_8) {
    case 'a': stawka = 35;
    case 'b': stawka = 37;
    case 'c': stawka = 40;
    case 'd': stawka = 45;
    case 'q': break;
    default: powitanie();
    }
    if (wejscie_8 != 'q') {
        printf("Ile godzin pracujesz?\n");
        scanf("%d", &liczba_h);
        wynagrodzenie_1 = 40 * liczba_h;
        if (wynagrodzenie_1 < pierwszy_prog) {
            netto_1 = wynagrodzenie_1 * pierwszy_podatek;
        }
        else if (wynagrodzenie_1 > pierwszy_prog and wynagrodzenie_1 < (pierwszy_prog + drugi_prog)) {
            netto_1 = ((wynagrodzenie_1 - pierwszy_prog) * 0.8) + 1200 * 0.85;
        }
        else {
            netto_1 = (pierwszy_podatek * pierwszy_prog) + (drugi_prog * drugi_podatek) + (wynagrodzenie_1 - (pierwszy_prog + drugi_prog)) * trzeci_podatek;
        }
        printf("Kwota brutto: %d, podatek: %d, wynagrodzenie netto: %d", wynagrodzenie_1, 15, netto_1);

    }



}
