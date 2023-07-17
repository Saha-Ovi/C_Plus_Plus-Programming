#include<bits/stdc++.h>
using namespace std;
int main()
{  
    int a,b,c,sum1=0,sum2=0,sum3=0;
    char s,q;
    cin>>a>>s>>b>>q>>c;

    if(s=='+'&& q=='=')
    {
        sum1=a + b;
        if(sum1!=c)
        {
            cout<<sum1;
        }
        else{
            cout<<"Yes";
           }
    }
    if(s=='-'&& q=='=')
    {
        sum2=a - b;
        if(sum2!=c)
        {
            cout<<sum2;
        }
        else{
            cout<<"Yes";
           }
    }
    if(s=='*'&& q=='=')
    {
        sum3=a * b;
        if(sum3!=c)
        {
            cout<<sum3;
        }
        else{
            cout<<"Yes";
           }
    }
  return 0;
}