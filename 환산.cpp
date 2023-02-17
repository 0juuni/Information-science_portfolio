#include<stdio.h>

void Length(float inch) {
	float cm;
	cm = inch * 2.5399;
	printf("답> %f인치(inch)는 %f센티미터(cm)\n\n",inch,cm);
	printf("성공적으로 환산을 수행하였습니다.\n");
}

void Length2(float m) {
	float meter;
	meter = m * 3.3058;
	
}

int main() {
	char a;
	float b;
	
	while(true) {
		printf("A. 인치를 센티미터로 환산하는 프로그램\n");
		printf("B. 평을 평방미터로 환산하는 프로그램\n");
		printf("Q. 프로그램 종료\n");
		
		scanf("%c", &a);
		if(a == 'a' || a== 'A') {
			printf("A. 인치를 센티미러로 환산하는 프로그램\n");
			printf("문 > 인치(inch)를 입력하세요:");
			scanf("%f", &b);
			getchar();
			Length(b);
		}
	}
}
