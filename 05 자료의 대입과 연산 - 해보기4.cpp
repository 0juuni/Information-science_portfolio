#include <stdio.h>
int main( )
{
 int a, b, c;
 int x1, x2, x3, x4, x5, x6;
 a=45, b=15, c=60;
 x1=a==45;
 x2=a%b!=0;
 x3=a>b;
 x4=a>b&&a>c;
 x5=a>b||a>c;
 x6=!(a>=b&&b>=c);

 printf("%d %d %d %d %d %d", x1, x2, x3, x4, x5, x6);
}
