#include<bits/stdc++.h>
using namespace std;
int main()
{  
    int test;
    cin>>test;
    for(int p=0;p<test;p++)
    {
        int n;
        cin>>n;
        int ar[n];
        for(int i=0;i<n;i++)
        {
            cin>>ar[i];
        }
        int mn=INT_MAX;
        int sum=0;
        // int mn =numeric_limits<int>::max();
        for(int i=0;i<n-1;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                sum=ar[i]+ar[j]+j-i;
                mn=min(mn,sum);

            }

        }
        cout<<mn<<endl;
        
    }
    
  return 0;
}