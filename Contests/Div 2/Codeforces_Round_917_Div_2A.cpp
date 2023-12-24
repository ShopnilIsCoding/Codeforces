#include<bits/stdc++.h>
typedef long long ll;
#define f(i,n) for(int i=0;i<n;i++)
using namespace std;

void calc()
{
    ll n;
    cin>>n;
    vector<ll>v(n);
    f(i,n) cin>>v[i];
    ll pos=0,neg=0,zero=0;
    f(i,n)
    {
        if (v[i]==0)
            zero++;
        else if (v[i]<0)
            neg++;
        else
            pos++;

    }
    if(zero!=0)
    {
        cout<<0<<endl;
        return;
    }
    if(neg%2!=0)
    {
        cout<<0<<endl;
        return;
    }
    cout<<1<<endl;
    cout<<pos<<" "<<neg<<endl;
}
    int main()
    {
       int t;
       cin>>t;
       while(t--)
       {
           calc();
       }
    }

