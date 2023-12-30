#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define f(i,n) for(int i=0;i<n;i++)

}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    ll t;
    cin>>t;
    while(t--)
    {
        ll n,k;
        cin>>n>>k;
        ll multi=1;
        while(n--)
        {
            ll x;
            cin>>x;
            multi*=x;
        }
        if(2023%multi)
        {
            cout<<"NO\n";
            continue;
        }
        cout<<"YES\n";
        cout<<2023/multi<<" ";
        k--;
        while(k--)

            cout<<1<<" ";
            cout<<endl;

    }
    return 0;
}
