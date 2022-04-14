#include <iostream>
using namespace std;
int main() {
    string s0="hello";
    string s1("hello world!");
    string s2(s1);
    string s3;
    string s4=s2;
    char a1[]={'a','b','c','\0'};
    string s5=a1;
    cout<<s0<<endl;
    cout<<s1<<endl;
    cout<<s2<<endl;
    if(s3.empty()){
        cout<<"s3 is empty"<<endl;    
    }
    s3.append("this is appended at end");
    cout<<s3<<endl;
    s3+=" this is done with += operator ";
    //remove
    cout<<s3.length()<<endl;
    s3.clear();
    cout<<s3.length()<<endl;
    cout<<s4<<endl;
    cout<<s5<<endl;
    string a="Apple";
    string b="Mango";
    cout<<a.compare(b)<<endl;// return 0 if equal,  > or < 0 if not equal
    cout<<b.compare(a)<<endl;
    cout<<a.compare(a)<<endl;
    /*overload operators also work
    a>b or b>a 
    can also access through a[0]*/
    //find substrings 
    string s="I am good boy";
    int index=s.find("good");
    cout<<index<<endl;
    string word="good";
    int len=word.length();
    s.erase(index,len+1);//+1 for removing extra space
    cout<<s<<endl;
    for(int i=0;i<a.length();i++){
        cout<<a[i]<<",";
    }
    cout<<endl;
    for(auto it=a.begin();it!=a.end();it++){   //auto: string::iterator it
        cout<<*it<<",";
    }
    cout<<endl;
    for(auto c:a){   //auto :char
        cout<<c<<",";
    }


}
