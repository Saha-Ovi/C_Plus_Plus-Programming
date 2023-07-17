#include<bits/stdc++.h>
using namespace std;
int main()
{  
    int test;
    for(int i=0;i<test;i++)
    {
        int n,even,odd,e,o;
        cin>>n;
        int ar[n];
        for(int i=1;i<=n;i++)
        {
            cin>>ar[i];
        }
        for(int i=1;i<=n;i++)
        {
            if(i%2==0)
            {
                 even=even+ar[i];
                 e++;
            }
            else if(i%2==1)
            {
                odd=odd+ar[i];
                o++;
            }
        }
        if(even==odd)
        {
            cout<<even;
        }
        // else if(e!=o)
        // {
        //     cout<<"-1";
        // }
        else 
        cout<<"0";
    }

  return 0;
}