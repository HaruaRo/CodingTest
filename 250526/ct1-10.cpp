#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {

	int a, b;
	scanf("%d\n%d", &a, &b);

	printf("%d\n", a * (b % 10));
	printf("%d\n", a * ((b / 10) % 10));
	printf("%d\n", a * (b / 100));
	printf("%d", a * b);

	return 0;
}