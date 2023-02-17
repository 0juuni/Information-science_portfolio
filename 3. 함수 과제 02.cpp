#include <stdio.h>

int a;
float n;

void gau(float x)
{
	if(x > (int)x)
	{
		a = (int)x + 1;
	}
	else
	{
		a = x;
	}
	printf("%d", a);
}
int main()
{
	printf("n값을 입력하세요:");
	scanf("%f", &n);
	
	gau(n);
}
