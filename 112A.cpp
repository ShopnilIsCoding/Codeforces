#include<iostream>
#include<string>
using namespace std;
int main()
 {
     string a;
     string b;
     int i,n;
     cin >> a >> b;
     n=a.size();
     for(i=0; i<n; i++){
        a[i]=tolower(a[i]);
        b[i]=tolower(b[i]);}
     if(a==b)
        cout<<"0"<<endl;
     else{
        for(i=0;i<n;i++){
            if(a[i]<b[i]){
                cout<<"-1"<<endl;
                break;
            }
            else if(a[i]>b[i]){
                cout<<"1"<<endl;
                break;
            }}}
     return 0;
}
