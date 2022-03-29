/*Given number of rows N, you have to print a Hollow Rhombus. See the output for corresponding given input.

Input Format
Single integer N.

Constraints
N <= 20

Output Format
Print pattern.

Sample Input
5
Sample Output
    *****
   *   *
  *   *
 *   *
*****
Explanation
For any input N. First line contains 4 space and then 5 {*} and then the second line contains according to the output format.*/
//code:
#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n-i;j++){
			cout<<" ";
		}
		if(i==1 || i==n){
			for(int j=1;j<=n;j++){
				cout<<"*";
			}
		}
		else{
			cout<<"*";
			for(int j=1;j<=n-2;j++){
				cout<<" ";
			}
			cout<<"*";
		}
		cout<<"\n";
	}
}
