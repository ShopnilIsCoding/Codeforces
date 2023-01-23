#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int main()
{
    string a;
    cin>>a;
    int i=0,n=a.size(),c=0;
    sort(a.begin(),a.end());
    for(i;i<n;i++){
    if(a[i]!=a[i+1])
    c++;
    }
    if(c%2==0)
        cout<<"CHAT WITH HER!";
    else
        cout<<"IGNORE HIM!";
    return 0;
}
