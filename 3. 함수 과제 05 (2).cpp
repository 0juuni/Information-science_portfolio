#include<iostream>
using namespace std;
int line;

void star2(int n) {
	if(n >= 2)
	{
		cout << "*";
		star2(n-1);
	}
}

void star1(int n) {
	if(n >= 0)
	{
		int k = line - n + 1;
		star2(k);
		cout << endl;
		star1(n-1);
	}
}

int main(void) {
	cin >> line;
	star1(line);
	return 0;
}
