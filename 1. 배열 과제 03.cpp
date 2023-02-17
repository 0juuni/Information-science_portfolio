#include<stdio.h>
int main(void) {
	int a[101] [101] = {0}, n, m, k, p, x, y, i, j;
	printf("입력 순서 : n, m, k, 각 변수p, p의좌표(x, y)\n");
	scanf("%d %d %d", &n, &m, &k);
	for(i=1;i<=k;i++)
		{
			scanf("%d %d %d", &p, &x, &y);
			a[x][y] = p;
		}
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			printf("%d", a[i][j]);
		}
		printf("\n");
	}
}
