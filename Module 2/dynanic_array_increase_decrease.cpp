#include <bits/stdc++.h>

using namespace std;

int main()
{
   int *a=new int[5]; //dynamic array declare
   for(int i=0;i<5;i++)
   {
        cin>>a[i];
   }
//    for(int i=0;i<5;i++)
//    {
//         cout<<a[i]<<" ";
//    }
   int *b=new int [7]; //array size increase

    for(int i=0;i<5;i++)
   {
      b[i]=a[i];
   }
   b[5]=60;
   b[6]=70;
   for(int i=0;i<7;i++)
   {
        cout<<b[i]<<" ";
   }
   cout<<endl;
   
   // delete an array

 delete[] a;  //array size decrease
 for(int i=0;i<5;i++)
 {
    cout<<a[i]<<" ";
 }
    return 0;
}
