/*
suppose n= 100 zerores =24
(100/5)+1(00/5*5)+(100/5*5*5)+.....n/5^i>=1
20+4=24
*/
#include <iostream>
using namespace std;
int fun(int n){
	int count=0;
	for(int i=5;n/i>=1;i=i*5){
		count+=n/i;
	}
	return count;
 
}
int main() {
	// your code goes here
	long long n;
	cin>>n;
	cout<<"zeroes in factorial of "<<n<<":"<<fun(n);
	return 0;
}
