#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <string.h>
#define pierwszy_prog 1200
#define drugi_prog 600
#define pierwszy_podatek 0.85
#define drugi_podatek 0.80
#define trzeci_podatek 0.75

int powitanie_1() {
    int number;
    printf("1) Stan wolny: 15% dochodu do 17850 $ plus 28% reszty\n");
    printf("2) Glowa rodziny: 15% dochodu do 23900 $ plus 28% reszty\n");
    printf("3) Malozenstwo, rozliczenie wspolne: 15% dochodu do 29750 $ plus 28% reszty\n");
    printf("4) Malozenstwo, rozliczenie osobne: 15% dochodu do 14875 $ plus 28% reszty\n");
    printf("Podaj odpowiedni numer\n");
    scanf("%d", &number);
    return number;
}

int czy_jest_pierwsza(int value) {
    if (value % 2 == 0)return false;
    for (int i = 3; i < sqrt(value); i++) {
        if (value % i == 0)return false;
    }
    return true;
}

void powitanie() {
    printf("********************\n");
    printf("Podaj liczbe odpowiadajaca zadanej stawce wynagrodzenia lub opcji:\n");
    printf("1) 35 zl/godz.          2) 37 zl/godz.");
    printf("3) 40 zl/godz.          2) 45 zl/godz.");
    printf("5) wyjscie");
}

int main()
{
    // Autor Krystian Kręcik

    printf("Zadanie 1\n");
    char znak;
    int liczba_odstepow=0, liczba_nowej_lini=0, liczba_innych=0;
    while ((znak = getchar()) != '#') {
        if (znak == ' ') liczba_odstepow++;
        else if (znak == '\n') liczba_nowej_lini++;
        else liczba_innych++;
    }
    liczba_innych -= (liczba_nowej_lini + liczba_odstepow);
    printf("Podsumowanie:\nLiczba odstepow: %d\nLiczba nowej lini: %d\nLiczba pozostalych znakow: %d", liczba_odstepow, liczba_nowej_lini, liczba_innych);
    
    printf("Zadanie 2\n");
    char tablica[100];
    char wejscie, licznik=0;
    while ((wejscie = getchar()) != '#') {
        tablica[licznik++] = wejscie;
    }
    for (int j = 0; j < licznik; j++) {
        if (j % 9 == 0) {
            printf("\n");
        }
        printf("%c ", tablica[j]);
    }
    
    printf("Zadanie 3\n");
    int parzyste[50], nieparzyste[50];
    int liczba, licznik_p=0, licznik_np=0, suma_p=0, suma_np=0;
    scanf("%d", &liczba);
    while (liczba != 0) {
        printf("wlasnie wczytalem: %d\n", liczba);
        if (liczba % 2 == 0) licznik_p++;
        else licznik_np++;
        printf("%d liczba\n", liczba);
        (liczba % 2 == 0) ? suma_p += liczba : suma_np += liczba;
        scanf("%d", &liczba);
    }
    printf("Podales %d liczby parzystych, %d liczby nieparzystych, srednia liczb parzystych to: %d, srednia liczb nie parzystych to: %d", licznik_p, licznik_np, suma_p/licznik_p, suma_np/licznik_np );
    
    printf("Zadanie 4\n");
    char znak1;
    int liczba_zmian=0;
    while ((znak1 = getchar()) != '#') {
        if (znak1 == '.') {
            putchar('!');
            liczba_zmian++;
        }
        else if (znak1 == '!') {
            printf("!!");
            liczba_zmian++;
        }
        else putchar(znak1);
    }
    printf("\nLiczba zmian to: %d\n", liczba_zmian);

    printf("Zadanie 5\n");
    char znak2;
    int liczba_zmian_1 = 0;
    while ((znak2 = getchar()) != '#') {
        switch (znak2) {
        case '.': {liczba_zmian_1++; putchar('!'); }
        case '!': {liczba_zmian_1++;  printf("!!"); }
        default: putchar(znak2);
        }
    }
    printf("\nLiczba zmian to: %d\n", liczba_zmian_1);
   
    printf("Zadanie 6\n");
    char znak_6;
    bool x;
    int licznik_6 = 0;
    while ((znak_6 = getchar()) != '#') {
        if (znak_6 == 'a') x = true;
        else if (znak_6 == 'n' and x == true) licznik_6++;
        else x = false;
    }
    printf("Licznik 'an' wynosi: %d\n", licznik_6);
    
    printf("Zadanie 7\n");
    int liczba_godzin,wynagrodzenie,netto;
    printf("Ile pracujesz w tygodniu?\n");
    scanf("%d", &liczba_godzin);

    wynagrodzenie = 40 * liczba_godzin;
    if (wynagrodzenie < pierwszy_prog) {
        netto = wynagrodzenie * pierwszy_podatek;
    }
    else if (wynagrodzenie > pierwszy_prog and wynagrodzenie < (pierwszy_prog+drugi_prog)) {
        netto = ((wynagrodzenie-1200)*0.8)+1200*0.85;
    }
    else {
        netto = (pierwszy_podatek * pierwszy_prog) + (drugi_prog * drugi_podatek) + (wynagrodzenie - (pierwszy_prog+drugi_prog)) * trzeci_podatek;
    }
    printf("Kwota brutto: %d, podatek: %d, wynagrodzenie netto: %d", wynagrodzenie, 15, netto);
    
    printf("Zadanie 8\n");
    int wejscie_8, stawka, liczba_h, wynagrodzenie_1, netto_1;
    do {
        powitanie();
        scanf("%d", &wejscie_8);
    }     while (wejscie_8 > 6 or wejscie_8<0);
    switch (wejscie_8) {
    case 1: stawka = 35;
    case 2: stawka = 37;
    case 3: stawka = 40;
    case 4: stawka = 45;
    case 5: break;
    default: powitanie();
    }
    if (wejscie_8 != 5) {
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
    
    printf("Zadanie 9\n");
    int liczba_pierwsza;
    printf("Podaj liczbe calkowita\n");
    scanf("%d", &liczba_pierwsza);
    if (czy_jest_pierwsza(liczba_pierwsza)) {
        printf("Twoja liczba: %d jest pierwsza", liczba_pierwsza);
    }
    else printf("Nie jest to liczba pierwsza");
   
    printf("Zadanie 10\n");
    int number, dochod_10, opcja;
    number = powitanie_1();
    if (number > 0 and number < 5) {
        printf("Podaj dochod: ");
        scanf("%d", &dochod_10);
    }
    else printf("cos tam");
    switch (number) {
    case 1: opcja = 17850;
    case 2: opcja = 23900;
    case 3: opcja = 29750;
    case 4: opcja = 14875;
    }
    if (dochod_10 < opcja) {
        dochod_10 = dochod_10 * 0.85;
    }
    else {
        dochod_10 = (opcja * 0.85) + (dochod_10 - opcja) * 0.72;
    }
    printf("Twoj dochod wynosi: %d", dochod_10);

}
