#include<iostream>
using namespace std;
struct Data{
	int x, y;
};

int main(void)
{
	Data p1, p2;
	cin >> p1.x >> p1.y >> p2.x >> p2.y;
	cout << (p1.x + p2.x)/2 << " " << (p1.y + p2.y)/2;
	return 0;
}
