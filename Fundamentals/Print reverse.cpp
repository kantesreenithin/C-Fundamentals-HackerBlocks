/*Take N as input, Calculate it's reverse also Print the reverse.

Input Format
Constraints
0 <= N <= 1000000000

Output Format
Sample Input
123456789
Sample Output
987654321
Explanation
You've to calculate the reverse in a number, not just print the reverse.*/
//code:

#include<iostream>
#include<cmath>
using namespace std;
int main() {
	int a,b,c;
	cin>>a>>b>>c;
	int d=((b*b)-(4*a*c));
	int r1=((-b+ sqrt(d))/(2*a));
	int r2=((-b-sqrt(d))/(2*a));
	if((a!=0)&&d>0){
		cout<<"Real and Distinct"<<endl;
		cout<<r2<<" "<<r1;
	}
	else if((a!=0)&&d==0){
		cout<<"Real and Equal "<<endl;
		cout<<r2<<" "<<r1;
	}
	else{
		cout<<"Imaginary"<<endl;
	}
		return 0;
}
