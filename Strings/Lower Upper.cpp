/*Print "lowercase" if user enters a character between 'a-z' , 
Print "UPPERCASE" is character lies between 'A-Z' and print "Invalid" for all other characters like $,.^# etc.

Input Format
Single Character .

Constraints
-

Output Format
lowercase UPPERCASE Invalid

Sample Input
$
Sample Output
Invalid*/
//code:
#include<bits/stdc++.h>
using namespace std;
int main() {
	char c;
	cin>>c;
	if(islower(c)){
		cout<<"lowercase";
	}
	else if(isupper(c)){
		cout<<"UPPERCASE";
	}
	else{
		cout<<"Invalid";
	}
	return 0;
}
