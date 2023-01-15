#include<bits/stdc++.h>
#include<string.h>
using namespace std;
int main()
{
    int n,x=0;
    string ch;
    cin>>n;
    for(int i=0;i<n;i++){
    cin>>ch;
    if(ch[0]=='+'||ch[2]=='+')
    ++x;
    else if (ch[0]=='-'||ch[2]=='-')
    --x;
    }
    cout<<x<<endl;
    return 0;
}
