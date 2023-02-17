#include<stdio.h>

int add(int x, int y) {
	int z = x + y; 
	return z;
}

int main(void) {
	int a;
	a = add(5, 6);
	printf("%d", a);
	
	return 0;
}
