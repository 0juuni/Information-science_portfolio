#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct Data{
	char name[10];
	int count;
	int price;
}Data;

int main(void) {
	printf("구조체 배열을 사용하여 품목 3개를 처리하는 프로그램\n");
	int i;
	struct Data d[3];
	for(i=0; i<3; i++) {
		printf("%d 번째 품목, 수량 단가 입력\n", i+1);
		printf("품목 :");
		scanf("%s", d[i].name);
		printf("수량 :");
		scanf("%d", &d[i].count);
		printf("단가 :");
		scanf("%d", &d[i].price);
	}
	for(i=0; i<3; i++) {
		printf("[품목 3개의 수량, 단가, 금액 출력]\n");
		printf("상품명 수량 가격 금액\n");
		printf("%s %d %d %d\n", d[i].name, d[i].count, d[i].price, d[i].count * d[i].price); 
	}

}
