#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {

	int a;

	scanf("%d", &a);
	if (1000 <= a && a <= 3000) {
		printf("%d", a - 543);
	}

	return 0;
}