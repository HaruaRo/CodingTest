#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {

	float a, b;
	scanf("%f\n%f", &a, &b);

	if (0 < a && a <= 1000 && 0 < b && b <= 1000)
		printf("1");
	else if (-1000 <= a && a < 0 && 0 < b && b <= 1000)
		printf("2");
	else if (-1000 <= a && a < 0 && -1000 <= b && b < 0)
		printf("3");
	else
		printf("4");

	return 0;
}