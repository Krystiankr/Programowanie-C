#include <iostream>
//Autor Krystian Kręcik
void wyswietl_jan() {
    printf("Panie Janie!\n");
}

void wyswietl_wstan() {
    printf("Rano wstan!\n");
}

void wyswietl_usmiech() {
    printf("Usmiech!");
}

int main()
{
    printf("Zadanie 1\n");
    printf("Krystian Krecik\n");
    printf("Krystian \nKrecik\n");
    printf("Krystian ");
    printf("Krecik\n");
    printf("\nZadanie 2\n");
    printf("Krystian Olsztyn\n");
    printf("\nZadanie 3\n");
    int wiek = 20;
    int wynik = 20 * 365;
    printf(("Zyjesz %d dni\n"),wynik);
    printf("\nZadanie 4\n");
    wyswietl_jan();
    wyswietl_jan();
    wyswietl_wstan();
    printf("\nZadanie 5\n");
    int liczba = 10;
    int operacje_liczba = (2 * liczba);
    for (int i = 0; i < 3; i++) {
        printf("Operacja %d: %d\n",i+1 ,i?operacje_liczba:liczba);
        if (i > 0) {
            operacje_liczba = (operacje_liczba * operacje_liczba);
        }
    }
    printf("\nZadanie 6\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 3-i; j > 0; j--) {
            wyswietl_usmiech();
        }
        printf("\n");
    }
}
