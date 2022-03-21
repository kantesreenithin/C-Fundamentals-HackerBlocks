/*Take N (number in decimal format). Write a function that converts it to octal format. Print the value returned.

Input Format
Constraints
0 < N <= 1000000000

Output Format
Sample Input
63
Sample Output
77
Explanation
Both input and output are integers*/
//code:
#include<iostream>
using namespace std;
int main() {
	long long n;
	cin>>n;
	int i=1,sum=0;
	while(n>0){
		int rem=n%8;
		sum=sum+i*rem;
		i=i*10;
		n/=8;
	}
	cout<<sum;
	
	return 0;
}
