#include<iostream>
using namespace std;
int fibo(int n) {
	if(n <= 2)
		return 1;
	else
		return fibo(n-1) + fibo(n-2);
}

int main(void) {
	int num, i;
	cin >> num;
	cout << fibo(num);
	return 0;
}
