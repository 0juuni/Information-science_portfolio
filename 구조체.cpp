#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct Data{
	char name[10];
	int count;
	int price;
}Data;

int main(void) {
	printf("����ü �迭�� ����Ͽ� ǰ�� 3���� ó���ϴ� ���α׷�\n");
	int i;
	struct Data d[3];
	for(i=0; i<3; i++) {
		printf("%d ��° ǰ��, ���� �ܰ� �Է�\n", i+1);
		printf("ǰ�� :");
		scanf("%s", d[i].name);
		printf("���� :");
		scanf("%d", &d[i].count);
		printf("�ܰ� :");
		scanf("%d", &d[i].price);
	}
	for(i=0; i<3; i++) {
		printf("[ǰ�� 3���� ����, �ܰ�, �ݾ� ���]\n");
		printf("��ǰ�� ���� ���� �ݾ�\n");
		printf("%s %d %d %d\n", d[i].name, d[i].count, d[i].price, d[i].count * d[i].price); 
	}

}
