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
	printf("n���� �Է��ϼ���:");
	scanf("%f", &n);
	
	gau(n);
}
