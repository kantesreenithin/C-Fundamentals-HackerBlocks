/*Take N (number in binary format). Write a function that converts it to decimal format and Print the value returned.

Input Format
Constraints
0 < N <= 1000000000

Output Format
Sample Input
101010
Sample Output
42
Explanation
For binary number fedcba , Decimal number = f * 2^5 + e * 2^4 + d * 2^3 + …..+ a * 2^0.*/
//code:
#include<iostream>
#include<cmath>
using namespace std;
int main() {
	long long n,rem=0,ans;
	cin>>n;
	int i=0;
	while(n>0){
		rem=n%10;
		ans+=rem*pow(2,i);
		n/=10;
		i++;
	}
	cout<<ans;

	return 0;
}
