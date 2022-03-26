/*Take N (number of rows), print the following pattern (for N = 4)
0
1 1
2 3 5
8 13 21 34

Input Format
Constraints
0 < N < 100

Output Format
Sample Input
4
Sample Output
0 
1    1 
2    3     5 
8   13    21    34
Explanation
Each number is separated from other by a tab. For given input n, You need to print n(n+1)/2 fibonacci numbers. Kth row contains , next k fibonacci numbers.*/
//code:
#include<iostream>
using namespace std;
int main() {
	int n;
	cin>>n;
	int n1=0,n2=1,n3;
	for(int i=0;i<n;i++){
		for(int j=0;j<=i;j++){
			if(i==0&&j==0){
				cout<<n1<<" ";
				continue;
			}
			else if(i==0 && j==1){
				cout<<n2<<" ";
				continue;
			}
			else if(i==1 && j==1){
				cout<<n2<<" ";
				continue;
			}
			n3=n1+n2;
			cout<<n3<<"  ";
			n1=n2;
			n2=n3;
		}
		cout<<"\n";
	}
	return 0;
}
