#include<iostream>
#include<string>
using namespace std;
int main()
{
    int i=1,y,a,b,c,d;;
    cin>>y;
    while(i!=0)
    {
        y++;
        a=y/1000;
        b=(y/100)%10;
        c=(y/10)%10;
        d=y%10;
        if(a!=b&&b!=c&&c!=d&&d!=a&&a!=c&&b!=d)
        {
            break;
        }

    }
    cout<<y;
}
