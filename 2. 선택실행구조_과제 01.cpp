#include<stdio.h>
int main(void)

{ 
	int n;
	scanf("%d",&n);
	if(n >= 90)
		printf("A");
	else if(n >= 80 && n < 90)
		printf("B");
	else if(n >= 70 && n < 80)
		printf("C");
	else 
		printf("D");
}
