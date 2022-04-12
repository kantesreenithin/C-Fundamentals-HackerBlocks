/*Take as input N, a number. Take N more inputs and store that in an array. Write a recursive function which tests if the array is a palindrome and returns a Boolean value. Print the value returned.

Input Format
Enter a number N , add N more numbers

Constraints
None

Output Format
Display the Boolean result

Sample Input
4
1
2
2
1
Sample Output
true*/
//code:
#include<iostream>
using namespace std;
bool ispalindrome(int a[],int n){
	for(int i=0;i<n/2;i++){
		if(a[i]!=a[n-i-1]){
			return false;
		}
	}
	return true;
}
int main() {
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	if(ispalindrome(a,n)){
		cout<<"true";
	}
	else{
		cout<<"false";
	}
	return 0;
}
