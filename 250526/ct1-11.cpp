#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#define MAX 1000000000000LL	//10ÀÇ 12½Â
int main() {

	long long a, b, c;
	scanf("%lld %lld %lld", &a, &b, &c);
	if (1 <= a && a <= MAX && 1 <= b && b <= MAX && 1 <= c && c <= MAX) {
		printf("%lld", a + b + c);
	}

	return 0;
}