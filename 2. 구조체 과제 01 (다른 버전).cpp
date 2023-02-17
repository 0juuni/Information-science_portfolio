#include<stdio.h>
#include<math.h>
struct point
{
	float x;
	float y;
}p;

int main()
{
	struct point p1, p2;
	
	printf("a1:");
	scanf("%f", &p1.a);
	printf("b1:");
	scanf("%f", &p1.b);
	
	printf("a2:");
	scanf("%f", &p2.a);
	prntf("y2:");
	scanf("%f", &p2.b);
	
	float mx;
	float my;
	
	mx = (p1.a + p2.a) / 2;
	my = (p1.b + p2.b) / 2;
	
	pritnf("(%f, %f)", mx, my);
}
