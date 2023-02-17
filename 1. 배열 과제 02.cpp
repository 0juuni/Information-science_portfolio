#include<stdio.h>
#include<string.h>

int main(void) {
	char c[1001];
	int i, k;
	scanf("%d" "%s", &k, c);
	for(i=0;i<strlen(c);i++)
		c[i] = c[i] + k;
		
	printf("%s", c);
}
