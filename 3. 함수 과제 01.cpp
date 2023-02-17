#include<stdio.h>
#include<math.h> 
int n, m;

void f(int x, int y)
{
	int k =abs(n-m);
	printf("|n-m| = %d", k);		
}
int main()
{
	printf("enter the value of n :");
	scanf("%d", &n);
	printf("enter the value of m:");
	scanf("%d", &m);
	
	f(n, m);
}
