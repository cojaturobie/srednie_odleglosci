#include<iostream>
#pragma warning(disable : 4996)

using namespace std;


int kwadrat(int x);


/***********   k=2   *********************/
/*k=2  l nieparzyste  h=0*/
void fun1(int l);
/*k=2  l parzyste  h=0*/
void fun2(int l);
/*k=2 l nieparzyste h=1 lub k=2 l niepa¿yste h=2*/
void fun3(int l);
/*k=2 l parzyste h=1*/
void fun4(int l);

/***********   k=1   *********************/
/*k=1  l nieparzyste h=0*/
void fun5(int l) {
	int dziel = (l*l - 1)*l;
	int petla = l / 2 + 1;
	int sum = 0;
	for (int j = 0; j < petla; j++) {
		if (j != petla - 1) {

		}
		else if (j == petla-1) {
			int poziom = l / 2 + 1;
			for (int i = 1; i < poziom; i++) {
				sum = sum + 8 * i*i;
			}
		}
	}
	printf("%d", sum / dziel);
}



int main() {
	
	int x;
	scanf("%d", &x);
	while (x--) {
		int d, k, l, h;
		scanf("%d %d %d %d", &d, &l, &k, &h);
		if (k == 0 && h == 2)printf("Inf\n");
		else if (k == 1 && l % 2 == 0 && h == 2)printf("Inf\n");
		else if (k == 2 && l % 2 == 0 && h == 2)printf("Inf\n");
		else if (k == 2 && l % 2 == 1 && h == 0)fun1(l);
		else if (k == 2 && l % 2 == 0 && h == 0)fun2(l);
		else if (k == 2 && l % 2 == 1 && h == 1)fun3(l);
		else if (k == 2 && l % 2 == 1 && h == 2)fun3(l);
		else if (k == 2 && l % 2 == 0 && h == 1)fun4(l);
		else printf("x\n");
	}
	return 0;
}