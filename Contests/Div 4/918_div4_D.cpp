#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        string s;
        cin>>s;
        string ans = "";
        ll idx= n-1;
        while(idx>=0)
            if(s[idx]=='a'||s[idx]=='e')
        {
            ans+=s[idx];
            idx--;
            ans+=s[idx];
            idx--;
            ans+=".";
        }
        else
        {
            ans+=s[idx];
            idx--;
            ans+=s[idx];
            idx--;
            ans+=s[idx];
            idx--;
            ans+=".";

        }
    ans.pop_back();
    reverse(ans.begin(),ans.end());
    cout<<ans<<endl;
    }

}
