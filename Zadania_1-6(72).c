#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
//Autor Krystian Kręcik

int main()
{
    printf("Zadanie 1\n");
    char variable1 = 14114421422235422;
    int  variable2 = 14114421422235422;
    printf("%d, %d", variable1, variable2);
    /*Gdy zmienna całkowita jest przepełniona wynik jest
    losowa ujemna liczba nie mającą sensu*/
    printf("\nZadanie 2\n");
    int znak;
    printf("Podaj kod ASCII\n");
    scanf("%d", &znak);
    printf("%c\n", znak);
    printf("Zadanie 3\n");
    printf("\aSally, przerazone niespodziewanym odglosem, krzyknela \"A niech mnie, co to bylo!?\"\n");
    printf("Zadanie 4\n");
    printf("Podaj liczbe zmienno przecinkowa\n");
    float zmienna_przecinkowa;
    scanf("%f", &zmienna_przecinkowa);
    printf("Podana liczba to %f lub %e\n",zmienna_przecinkowa, zmienna_przecinkowa);
    printf("Zadanie 5\n");
    printf("Podaj swoj wiek\n");
    int wiek;
    scanf("%d", &wiek);
    printf("Twoj wiek w sekundach to: %d\n", int(3.156 * wiek* 10000000));
    printf("Zadanie 6\n");
    printf("Podaj ilosc litrow\n");
    int litry;
    scanf("%d", &litry);
    printf("Liczba czasteczek wody w %d litrach wynosi: %f",litry,(1000*litry)/3.156E-23);
}
