/*Take the following as input.
A number
A digit
Write a function that returns the number of times digit is found in the number. Print the value returned.

Input Format
Integer (A number) Integer (A digit)

Constraints
0 <= N <= 1000000000 0 <= Digit <= 9

Output Format
Integer (count of times digit occurs in the number)

Sample Input
5433231 
3
Sample Output
3
Explanation
The digit can be from 0 to 9. Assume decimal numbers.In the given case digit 3 is occurring 3 times in the given number.*/
//code:
#include<iostream>
using namespace std;
int main() {
	int n,digit;
	cin>>n>>digit;
	int count=0,rem=0;
	while(n>0){
		rem=n%10;
		if(rem==digit){
			count++;
		}
		n/=10;
	}
	cout<<count;
	return 0;
}
