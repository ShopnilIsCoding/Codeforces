#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void test()
{
    ll a, b, l;
    cin >> a>> b>> l;

    ll ta=a,tb=b;
    ll x = 1, y = 1;
    while (a < l)
    {
        if (l % a == 0)
            x++;
        else
            break;
        a *= ta;
        
        /* code */
    }
    while (b < l)
    {
        if (l % b == 0)
            y++;
        else
            break;
        b *= tb;

        /* code */
    }
    set<ll>s;
    for (int i = 0; i <= x; i++)
    {
        for (int j = 0; j <= y; j++)
        {
            ll temp=pow(ta,i)*pow(tb,j);
            if(temp<=l && l%temp==0)
            s.insert(l/temp);
            /* code */
        }
        
        /* code */
    }
    cout << s.size() << endl;
    
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
    
}