#include<stdio.h>
#include<stdlib.h>
#include<time.h>
 
int main() {
	
	srand((unsigned)time(NULL));
	int a;
	a = rand() % 6 + 1;
	printf("%d\n", a);
	
	if(a % 2 == 0) {
		printf("¦���Դϴ�");
	}
	else {
		printf("Ȧ���Դϴ�");
	} 
	return 0;
}
