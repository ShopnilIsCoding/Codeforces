#include<iostream>
#include<string>
using namespace std;
int main()
{
    int a,c1 = 0,c2 = 0;
    cin >> a;
    string s;
    cin >> s;
    for(int i=0;i<a;i++)
    {
        if(s[i]=='A')
        {
            c1++;
        }
        else if(s[i]=='D')
        {
            c2++;
        }
    }
    if(c1>c2)
    {
        cout<<"Anton";
    }
    else if(c1<c2)
    {
        cout<<"Danik";
    }
    else if(c1==c2)
    {
        cout<<"Friendship";
    }
    return 0;
}
