#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define f(i,n) for(int i=0;i<n;i++)
void test()
{
       /*     ll n,k,mult=1;
        cin>>n>>k;
        bool check =false;
        f(i,n)
        {
            ll b;cin>>b;
            mult*=b;
            if(2023%mult!=0)
            {
                check=true;
            }
        }
        if(check)
        {
            cout<<"NO\n";
            return;
        }
        cout<<"YES\n";
        cout<<2023/mult;
        for(int i=0;i<k-1;i++)
        {
            cout<<" "<<1;
        }
        cout<<"\n";*/
        ll n,k;
        cin>>n>>k;
        vector<ll>v(n);
        f(i,n)cin>>v[i];
        ll mult=1;
        f(i,n)
        mult*=v[i];
        ll x=2023/mult;
        if(mult*x==2023)
        {
            cout<<"YES\n";
            f(i,k-1)
            cout<<1<<" ";
            cout<<x<<endl;
        }
        else
            cout<<"NO\n";

}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;
    while(t--)
    {
        test();
    }
    return 0;
}
