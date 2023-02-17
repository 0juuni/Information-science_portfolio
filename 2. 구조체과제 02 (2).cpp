#include<iostream>
#include<math.h>
using namespace std;
struct Data{
	int x, y;
};

int main(void)
{
	Data p;
	double len;
	cin >> p.x >> p.y;
	len = sqrt(pow(p.x, 2)+pow(p.y, 2));
	printf("%.42f", len);
	return 0;
}
