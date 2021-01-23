#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <fstream>
#include <string>
#include <cstdio>
// Autor Krystian Kręcik
using namespace std;

double min(double x, double y) {
	if (x < y) return x;
	else return y;
}

void rzad_zn(char ch, int i, int j) {
	for (int k = 0; k < i; k++) {
		for (int m = 0; m < j; m++) {
			printf("%c", ch);
		}
		printf("\n");
	}
	printf("\n");
}

double harmoniczna(double a, double b) {
	return (2 / (1 / a + 1 / b));
}

float potega(double podstawa, double wykladnik) {
	if (wykladnik > 0) {
		for (int i = 1; i < wykladnik; i++)
			podstawa *= podstawa;
		return podstawa;
	}
	else if (wykladnik < 0) {
		for (int i = 1; i < (wykladnik*(-1)); i++)
			podstawa *= podstawa;
		return (1/podstawa);
	}
	else return 1;
}

float potega1(double podstawa, double wykladnik) {
	if (wykladnik == 0)
		return 1;
	if (wykladnik > 0 )
		podstawa *= potega1(podstawa, wykladnik - 1);
	else if (wykladnik < 0)
		podstawa *= potega1(podstawa, (wykladnik*(-1)) - 1);
	if (wykladnik > 0)
		return podstawa;
	else return 1 / podstawa;
}
int main()
{

	printf("Zadanie 1\n");
	printf("%.2f", min(3.2, 3.21));

	printf("Zadanie 2\n");
	rzad_zn('s', 3, 5);

	printf("Zadanie 3\n");
	rzad_zn('s', 3, 5);
	
	printf("Zadanie 4\n");
	printf("%.2f",harmoniczna(2,5));
	
	printf("Zadanie 5\n");
	FILE* fp;
	fp = fopen("example.txt", "r");
	char ch;
	while ((ch = fgetc(fp)) != EOF) {
		if (ch >= 'a' and ch <= 'z')
			printf("(%c:%d)", ch, int(ch) - 'a' + 1);
		else if (ch >= 'A' and ch <= 'Z')
			printf("(%c:%d)", ch, int(ch) - 'A' + 1);
		else printf("-1");
	}
	
	printf("Zadanie 6\n");
	printf("%f", potega(2,-4));

	printf("Zadanie 7\n");
	printf("%f", potega1(2, -3));

}
