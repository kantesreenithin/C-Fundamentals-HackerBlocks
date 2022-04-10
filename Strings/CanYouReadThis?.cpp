/*One of the important aspect of object oriented programming is readability of the code. To enhance the readability of code, developers write function and variable names in Camel Case. You are given a string, S, written in Camel Case. FindAllTheWordsContainedInIt.

Input Format
A single line contains the string.

Constraints
|S|<=1000

Output Format
Print words present in the string, in the order in which it appears in the string.

Sample Input
IAmACompetitiveProgrammer
Sample Output
I
Am
A
Competitive
Programmer
Explanation
There are 5 words in the string.*/
//code:
#include<bits/stdc++.h>
using namespace std;
int main() {
	char s[1001];//char array 
	cin>>s;
	for(int i=0;i<strlen(s); ){
		if(isupper(s[i])){
			cout<<s[i];
			i++;
		}
		while(!isupper(s[i])&&i<strlen(s)){ // for non capital one 
			cout<<s[i];
			i++;
		}
		cout<<endl;
	}
	return 0;
}
