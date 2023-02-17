#include<stdio.h>

int main(void) {
	int a, b, c;
	int max;

	printtf("세 정수의 최댓값을 구합니다.\n");
	printf("a의 값 : ");
	scanf_S("%d", &a);
	printf("b의 값 : ");
	scanf_S("%d", &b);
	printf("c의 값 : ");
	scanf_S("%d", &c);

	max = a;
	if (b > max) max = b;
	if (c > max) max = c;

	printf("최댓값은 %d입니다.\n", max);

	return 0;
}


