#include<stdio.h>
#include<stack>
using namespace std;

int main(void) {
	int n, i, num;
	stack<int> stk;
	
	scanf("%d", &n);
	for(i=1;i<=n;i++)
	{
		scanf("%d", &num);
		stk.push(num); 
	}
	
	for(i=1;i<=n;i++)
	{
		printf("%d\n", stk.top());
		stk.pop();
	}
	
	return 0;
}
