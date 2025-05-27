#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {

	int a, b;
	scanf("%d %d", &a, &b);
	if (-10000 <= a && a <= 10000 && -10000 <= b && b <= 10000) {
		if (a > b)
			printf(">");
		else if (a < b)
			printf("<");
		else
			printf("==");
	}

	return 0;
}