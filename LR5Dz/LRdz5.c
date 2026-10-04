#define _CRT_SECURE_NO_WARNINGS
#include<locale.h>
#include<stdio.h>
#include<math.h>
#define M_PI 3.1415926535
int dz(void) {
	setlocale(LC_ALL, "RUS");
	float  x,y, rez1, rez2, rez3, rez4, rez5, rez6, rez7, rez8, rez;
	const float z = 3.5/100;
	puts("??????? ?????????? X \n");
	scanf("%f", &x);
	puts("??????? ?????????? Y \n");
	scanf("%f", &y);
	rez1 = pow(z, 2);
	rez2 = rez1 / 5;
	rez3 = rez1 / (3 - rez2);
	rez4 = 1 + rez3;
	rez5 = 2 * cos(x - (M_PI / 6));
	rez6 = sin(y) * sin(y);
	rez7 = 0.5 + rez6;
	rez8 = rez5 / rez7;
	rez = rez8 * rez4;
	printf("???????? ????????? = %f\n", rez);
	getchar(); 
	return 0;
}

int main() {
	dz();
	return 0;
}