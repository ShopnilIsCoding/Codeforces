#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
           string a;
           
           cin>>a;
           int c=0;
           for(auto x:a)
           {
            if(x=='A')
            c++;
           }
           if(c>=(a.size()-c))
           cout<<"A"<<endl;
           else
           cout<<"B"<<endl;        
    }  
}
