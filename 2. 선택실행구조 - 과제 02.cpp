#include<stdio.h>
int f(int n1, int n2)
{
	if(n2==0) return n1;
	else return f(n2, n1%n2);
}

int main(void)
{
	int n1, n2, i, gcf;
	scanf("%d" "%d", &n1, &n2);
	
	gcf = f(n1, n2);
	
	for(i=1;i<=gcf;i++)
		if(gcf%i == 0)
			printf("%d ", i);
	return 0;
}
