#include<stdio.h>

int main(void) {
	int a, b, c;
	int max;

	printtf("�� ������ �ִ��� ���մϴ�.\n");
	printf("a�� �� : ");
	scanf_S("%d", &a);
	printf("b�� �� : ");
	scanf_S("%d", &b);
	printf("c�� �� : ");
	scanf_S("%d", &c);

	max = a;
	if (b > max) max = b;
	if (c > max) max = c;

	printf("�ִ��� %d�Դϴ�.\n", max);

	return 0;
}


