#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {

	int a, b;
	scanf("%d %d", &a, &b);
	if (1 <= a && 10000 >= b) {
		printf("%d\n", a + b);
		printf("%d\n", a - b);
		printf("%d\n", a * b);
		printf("%d\n", a / b);
		printf("%d", a % b);
	}

	return 0;
}