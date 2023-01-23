#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int i,n= s.size();
    for(i=0;i<n;i++){
            s[i]=tolower(s[i]);
            if(s[i]!='a'&& s[i]!='e' &&s[i]!='i' &&s[i]!='o' && s[i]!='u' && s[i]!='y'){
            cout<<"."<<s[i];
    }}
}
