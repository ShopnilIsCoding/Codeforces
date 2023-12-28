#include<bits/stdc++.h>
using namespace std;
#define f(i,n) for(int i=0;i<n;i++)
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n=3;
        vector<vector<char>>v(n,vector<char>(n));
        f(i,n)
        {
            f(j,n)
            {
                cin>>v[i][j];
            }
        }
        int a=0,b=0,c=0;
        f(i,n)
        {
            f(j,n)
            {
                if(v[i][j]=='A')a++;
                else if(v[i][j]=='B')b++;
                else if(v[i][j]=='C')c++;
            }
        }
                if(a==b)
            cout<<"C"<<endl;
        else if(a==c)
            cout<<"B"<<endl;
        else if(b==c)
            cout<<"A"<<endl;

    }
}
