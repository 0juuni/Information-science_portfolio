#include <stdio.h>
int main( )
{
 int a=2147483647;
 unsigned int b=4294967295;
 long long c=9223372036854775807;
 unsigned long long d=18446744073709551615;
 float e=0.12345678912345f;
 double f=0.12345678912345;
 printf("%d\n", a);
 printf("%u\n", b);
 printf("%lld\n", c);
 printf("%llu\n", d);
 printf("%.15f\n", e);
 printf("%.15f\n", f);
}
