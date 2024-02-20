#include <bits/stdc++.h>
using namespace std;

// mOnkeyP
void kNife()
{
    int p;
    cin >> p;
    vector<string> v(p);
    for (int r = 0; r < p; r++)
    {
        cin >> v[r];
    }
    int c = 0, s = 0;
    for (int r = 0; r < p; r++)
    {
        c = 0;
        for (int e = 0; e < p; e++)
        {
            if (v[r][e] == '1')
                c += 1;
        }
        if (c != 0)
        {
            if (c != s && s != 0)
            {
                cout << "TRIANGLE" << endl;
                return;
            }
            else
            {
                s = c;
            }
        }
    }
    cout << "SQUARE" << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        kNife();
    }
    return 0;
}
