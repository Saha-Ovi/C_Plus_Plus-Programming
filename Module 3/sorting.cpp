#include <bits/stdc++.h>

using namespace std;

int main()
{
   int n;
   cin>>n;
   int ar[n];
   for(int i=0;i<n;i++)
   {
        cin>>ar[i];
   }
//    Ascending order printing 

//    sort(ar,ar+n); 

// Descending Order printing

    sort(ar,ar+n,greater<int>());

   for(int i=0;i<n;i++)
   {
        cout<<ar[i]<<" ";
   }


    return 0;
}