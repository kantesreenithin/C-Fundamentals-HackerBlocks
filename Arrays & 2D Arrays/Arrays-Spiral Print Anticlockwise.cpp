/*Take as input a 2-d array. Print the 2-D array in spiral form anti-clockwise.

Input Format
Two integers M(row) and N(colomn) and further M * N integers(2-d array numbers).

Constraints
Both M and N are between 1 to 10.

Output Format
All M * N integers separated by commas with 'END' written in the end(as shown in example).

Sample Input
4 4
11 12 13 14
21 22 23 24
31 32 33 34
41 42 43 44
Sample Output
11, 21, 31, 41, 42, 43, 44, 34, 24, 14, 13, 12, 22, 32, 33, 23, END
Explanation
For spiral level anti-clockwise traversal, Go for first column-> last row ->last column-> first row and then do the same traversal for the remaining matrix .*/
//code:
#include<iostream>
using namespace std;
void spiral_print(int a[10][10],int m,int n){
	int start_row=0;
	int start_col=0;
	int end_row=m-1;
	int end_col=n-1;
	while(start_row<=end_row && start_col<=end_col){
		for(int i=start_row;i<=end_row;i++){
			cout<<a[i][start_col]<<", ";
		}
		start_col++;

		for(int i=start_col;i<=end_col;i++){
			cout<<a[end_row][i]<<", ";
		}
		end_row--;

		if(end_row>start_row){
			for(int i=end_row;i>=start_row;i--){
			cout<<a[i][end_col]<<", ";
		}
		end_col--;
		}
		if(end_col>start_col){
			for(int i=end_col;i>=start_col;i--){
			cout<<a[start_row][i]<<", ";
		}
		start_row++;
		}
		

	}
	cout<<"END";

}
int main() {
	int m,n;
	cin>>m>>n;
	int a[10][10];
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			cin>>a[i][j];
		}
	}
	spiral_print(a,m,n);

	return 0;
}
