#include<bits/stdc++.h>
using namespace std;
int main()
{  
    int test;
    cin>>test;
    for(int i=0;i<test;i++)
    {
        string ticket;
        int sum1=0,sum2=0;
        cin>>ticket;
        for(int j=0;j<ticket.size()-3;j++)
        {
            sum1=sum1+ticket[j];
        }
        for(int j=ticket.size()-3;j<ticket.size();j++)
        {
            sum2=sum2+ticket[j];
        }
        if(sum1==sum2)
        {
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }

  return 0;
}