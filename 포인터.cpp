#include<stdio.h>
int Gob(int *pa, int*pb); 

int main(void) {
	int a = 10, b= 20;
	int result = Gob(&a, &b);
	printf("%d", result);
}  


int Gob(int *pa, int *pb) {
	int c = *pa * *pb;
	return c;
}
