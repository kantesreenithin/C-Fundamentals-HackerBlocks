/*Take N (number of rows), print the following pattern (for N = 4).

                       1           1
                       1 2       2 1  
                       1 2 3   3 2 1
                       1 2 3 4 3 2 1   
Input Format
Constraints
0 < N < 10

Output Format
Sample Input
4
Sample Output
1						1
1	2				2	1
1	2	3		3	2	1
1	2	3	4	3	2	1*/
//code:
#include<iostream>
using namespace std;
int main() {
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			if(j<=i){
				cout<<j<<"\t";
			}
			else{
				cout<<"\t";
			}
		}
		if(i==n){
			for(int k=n-1;k>=1;k--){
				if(k<=i){
					cout<<k<<"\t";
				}
				else{
					cout<<"\t";
				}
			}
		}
		else{
		for(int k=n-1;k>=1;k--){
				if(k<=i){
					cout<<k<<"\t";
				}
				else{
					cout<<"\t";
				}
			}
		}
		cout<<"\n";
	}
	return 0;
}
