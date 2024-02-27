#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void test()
{
    ll n,sum=0;
    cin>>n;
    vector<ll>v(n);
    for (int i = 0; i < n; i++)
    {
        cin>>v[i];
    }
    sum= accumulate(v.begin(),v.end(),sum);
    if(sum%3==0)
    {
        cout<<0<<endl;
        return;

    }
    if(sum%3==2)
    {
        cout<<1<<endl;
        return;
    }

    for (int i = 0; i < n; i++)
    {
        ll temp=sum-v[i];
        if(temp%3==0)
        {
            cout<<1<<endl;
        return;
        }
        /* code */
    }
    cout<<2<<endl;
    
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t;
    cin>>t;
    while (t--)
    {
        test();
        /* code */
    }
    return 0;
    
}