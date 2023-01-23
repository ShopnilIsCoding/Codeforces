#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int i,j,n=s.size();
    for(i=0; i<n; i+=2)
    {
        for(j=0; j<n-1; j+=2)
        {
            if(s[j]>s[j+2])
            {
                swap(s[j],s[j+2]);
            }
        }
    }
    cout<<s;
}
