#include <bits/stdc++.h>

using namespace std;

int main()
{
   int a,b,c;
   cin>>a>>b>>c;
   int mx,mn;
   mx=max(a,max(b,c));
   mn=min(a,min(b,c));
   cout<<mn<<" "<<mx;


    return 0;
}

// **************************************** second way ***************************************

// #include <bits/stdc++.h>

// using namespace std;

// int main()
// {
//    int ar[3];

//    for(int i=0;i<3;i++)
//    {
//         cin>>ar[i];
//    }

//    int mx=ar[0],mn=ar[0];

//    for(int i=0;i<3;i++)
//    {
//         if(mx<ar[i])
//         {
//             mx=ar[i];
//         }
//         else if(mn>ar[i])
//         {
//             mn=ar[i];
//         }
//    }
//    cout<<mn<<" "<<mx;
//     return 0;
// }