#include <stdio.h>
int main( )
{
 int a, b, c, d, e;
 long long f, g, h;
 a=0;
 b=-70;
 c=+100;
 d=012;
 e=0xFF;
 f=2147483647+1;
 g=2147483648;
 h=2147483647LL+1;

 printf("%d\n", a);
 printf("%d\n", b);
 printf("%d\n", c);
 printf("%d\n", d);
 printf("%d\n", e);
 printf("%lld\n", f);
 printf("%lld\n", g);
 printf("%lld\n", h);
}
