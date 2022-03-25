/*Given a number N (denoting one of the legs of the triangle), Print its Pythagoras pair in increasing order if they exist. Otherwise, print "-1".

Input Format
A single integer N

Constraints
N <= 10^9

Output Format
Two numbers X and Y denoting the rest of the numbers of the Pythagorean triplet in increasing order.

Sample Input
3
Sample Output
4 5*/
//code:
#include<iostream>
using namespace std;
int main() {
	long long N,h,en,on;
	cin>>N;
	long long m=0,n=0;
	if(N==1||N==0){
		cout<<"-1";
	}
	else if(N%2==0){
		m=(N/2);
		n=1;
		 h=((m*m)+(n*n));
		 on=((m*m)-(n*n));
		cout<<on<<" "<<h;
	}
	else{
		m=(N+1)/2;
		n=(N-1)/2;
	     en=(2*m*n);
		 h=((m*m)+(n*n));
		cout<<en<<" "<<h;
	}
	return 0;
}
/*
h^2=a^2+b^2;
values suppose m,n m>0,n>0
(m^2-n^2,2mn,m^2+n^2)
odd,even,hypotenous
*/
