#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {

	char a[50];	//50자를 넘기지 않는다.
	scanf("%s", &a);

	printf("%s??!", a);

	return 0;
}