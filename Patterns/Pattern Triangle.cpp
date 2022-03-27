/*Take N (number of rows), print the following pattern (for N = 4).

                       1 
                     2 3 2
                   3 4 5 4 3
                 4 5 6 7 6 5 4
Input Format
Constraints
0 < N < 10

Output Format
Sample Input
4
Sample Output
                        1
		2	3	2
	3	4	5	4	3
4	5	6	7	6	5	4
Explanation
Each number is separated from other by a tab.*/
//code:
#include<iostream>
using namespace std;
int main() {
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n-i;j++){
			cout<<"\t";
		}
		int val=i;
		for(int k=1;k<=i;k++){
			cout<<val<<"\t";
			val++;

		}
		val=val-2;//here val becomes increamented
		for(int l=1;l<=i-1;l++){
			cout<<val<<"\t";
			val--;
		}
		cout<<"\n";
	}
	return 0;
}
