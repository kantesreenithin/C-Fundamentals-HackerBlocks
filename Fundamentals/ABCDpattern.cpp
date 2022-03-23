/*
n=5
ABCDE
ABCD
ABC
AB
A*/
//code:
#include <iostream>
using namespace std;
void ABCDpattern(int n){
	for(int i=1;i<=n;i++){
		char alphabet='A';
		for(int j=1;j<=n-i+1;j++){
			cout<<alphabet;
			alphabet+=1;
		}
		cout<<endl;
	}
}
int main() {
	// your code goes here
	int n;
	cin>>n;
	ABCDpattern(n);
	return 0;
}
