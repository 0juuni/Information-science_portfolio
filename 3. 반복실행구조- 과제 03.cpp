#include<stdio.h>
int main(void)
{
	int num, i, j, k=1;
	scanf("%d", &num);
	for(i=1;i<=num;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%d ", k);
			k++;
		}
	printf("\n");
	}
	return 0;
}
