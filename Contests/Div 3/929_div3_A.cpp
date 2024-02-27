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
        /* code */
    }
    for (int i = 0; i < n; i++)
    {
        sum+=(abs(v[i]));
        /* code */
    }
    cout<<sum<<endl;
    
}

int main()
{
    ll t;
    cin>>t;
    while (t--)
    {
        test();
        /* code */
    }
    return 0;
}
