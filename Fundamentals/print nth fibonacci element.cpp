#include <iostream>
using namespace std;
int nthfibonacci(int n){
	int a=0,b=1,c;
	if(n==0) return 0;
	if(n==1) return 1;
	for(int i=1;i<=n-1;i++){
		c=a+b;
		a=b;
		b=c;
	}
	return c;
}
int main() {
	// your code goes here
	int val;
	cin>>val;
	cout<<val<<"th fibonacci number is:"<<nthfibonacci(val);
	
	return 0;
}
