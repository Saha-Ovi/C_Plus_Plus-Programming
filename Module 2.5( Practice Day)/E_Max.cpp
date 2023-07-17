#include <bits/stdc++.h>
#include<string.h>

using namespace std;

int main()
{
   int n,sum=INT_MIN;
   cin>>n;
   int ar[n];
   for(int i=0;i<n;i++)
   {
        cin>>ar[i];
   }
   for(int i=0;i<n;i++)
   {
     //   sum= max(sum,ar[i]);  ///eta (sum<ar[i]) kina check kore (sum=ar[i]) te rekhe dei
       sum= max(ar[i],sum);   ///eta (ar[i]>sum) kina check kore (sum=ar[i]) te rekhe dei
   }
   
   cout<<sum;

    return 0;
}