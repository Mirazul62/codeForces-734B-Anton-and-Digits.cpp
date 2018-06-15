#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a,b,c,d,min=0,ans=0,max=0,a1;
    cin>>a>>b>>c>>d;
    if(a<=c && a<=d)
        min=a;
     if(c<=a && c<=d)
        min=c;
    if(d<=a && d<=c)
        min=d;
    ans=min*256;
   // cout<<ans<<endl;
    a1=a-min;
  //  cout<<"a1"<<a1<<endl;

    //cout<<a1<<" "<<b;
    if(a1<=b)
    max=a1;
    if(b<=a1)
    max=b;
  //  cout<<"max"<<max<<endl;

    ans+=max*32;

    cout<<ans;


}
