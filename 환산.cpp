#include<stdio.h>

void Length(float inch) {
	float cm;
	cm = inch * 2.5399;
	printf("��> %f��ġ(inch)�� %f��Ƽ����(cm)\n\n",inch,cm);
	printf("���������� ȯ���� �����Ͽ����ϴ�.\n");
}

void Length2(float m) {
	float meter;
	meter = m * 3.3058;
	
}

int main() {
	char a;
	float b;
	
	while(true) {
		printf("A. ��ġ�� ��Ƽ���ͷ� ȯ���ϴ� ���α׷�\n");
		printf("B. ���� �����ͷ� ȯ���ϴ� ���α׷�\n");
		printf("Q. ���α׷� ����\n");
		
		scanf("%c", &a);
		if(a == 'a' || a== 'A') {
			printf("A. ��ġ�� ��Ƽ�̷��� ȯ���ϴ� ���α׷�\n");
			printf("�� > ��ġ(inch)�� �Է��ϼ���:");
			scanf("%f", &b);
			getchar();
			Length(b);
		}
	}
}
