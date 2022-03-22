#include <iostream>
using namespace std;
bool isprime(int n){
	for(int i=2;i<n;i++){
		if(n%i==0){
			return false;
		}
	}
	return true;
	
}
void allprime(int n){
	for(int i=2;i<=n;i++){
		if(isprime(i)){
			cout<<i<<" ";
		}
	}
}
int main() {
	// your code goes here
	int n;
	cin>>n;
	allprime(n);
	return 0;
}
