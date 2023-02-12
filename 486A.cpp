#include<iostream>
using namespace std;
int main()
{
    long long int in,ans=0;
    cin>>in;
    if(in%2==0)
    {
        ans=in/2;
    }
    else
    {
        ans=-((in/2)+1);
    }
    cout<<ans;
}
