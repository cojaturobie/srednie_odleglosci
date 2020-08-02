#include<iostream>
#pragma warning(disable : 4996)


int kwadrat(int x) {
	return x*x;
}

/*k=2  l nieparzyste  h=0*/
void fun1(int l) {
	int sum = 0;
	int dziel = l*l - 1;
	int poziom = l / 2 + 1;
	for (int i = 1; i < poziom; i++) {
		sum = sum + 8 * i*i;
	}
	printf("%d\n", sum / dziel);
}

/*k=2  l parzyste  h=0*/
void fun2(int l) {
	int sum = 0;
	int dziel = l*l - 1;
	int poziom = l / 2 + 1;
	for (int i = 1; i < poziom; i++) {
		if (i != poziom - 1) {
			sum = sum + 8 * i*i;
		}
		else if (i == poziom - 1) {
			sum = sum + (2 * l - 1)*i;
		}
	}
	printf("%d\n", sum / dziel);
}

/*k=2 l nieparzyste h=1 lub k=2 l niepa¿yste h=2*/
void fun3(int l) {
	int dziel = l*l - 1;
	int sum = 0;
	int poziom = l / 2 + 1;
	for (int i = 1; i < poziom; i++) {
		sum = sum + kwadrat(i) * 12;
	}
	printf("%d\n", sum / dziel);
}

/*k=2 l parzyste h=1*/
void fun4(int l) {
	int dziel = l*l - 1;
	int sum = 0;
	int poziom = l / 2 + 1;
	for (int i = 1; i < poziom; i++) {
		if (i != poziom - 1) {
			sum = sum + kwadrat(i) * 12;
		}
		else if (i == poziom - 1) {
			sum = sum + (kwadrat(i) * 12) / 2 - l;
		}
	}
	printf("%d\n", sum / dziel);
}