#include<stdio.h>
#include<stdlib.h>
#include<time.h>
 
int main() {
	
	srand((unsigned)time(NULL));
	int a;
	a = rand() % 6 + 1;
	printf("%d\n", a);
	
	if(a % 2 == 0) {
		printf("짝수입니다");
	}
	else {
		printf("홀수입니다");
	} 
	return 0;
}
