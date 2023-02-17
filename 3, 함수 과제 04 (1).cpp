#include<iostream>
using namespace std;

int main(void) {
	int f1 = 0, f2 = 1, f, i, n;
	cin >> n;
	for(i=1;i<=n;i++)
	{
		f = f1 + f2;
		f1 = f2;
		f2 = f;
	}
	 cout << f1;
	 return 0;
}
