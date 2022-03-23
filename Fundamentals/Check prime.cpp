/*Take as input a number N, print "Prime" if it is prime if not Print "Not Prime".

Input Format
Constraints
2 < N <= 1000000000

Output Format
Sample Input
3
Sample Output
Prime
Explanation
The output is case specific*/
//code:
#include<iostream>
using namespace std;
int main() {
	int n,count=0;
	cin>>n;
	for(int i=1;i<=n;i++){
		if(n%i==0){
			count++;
		}
	}
	if(count==2){
		cout<<"Prime"<<endl;
	}
	else{
		cout<<"Not Prime"<<endl;
	}

	return 0;
}
