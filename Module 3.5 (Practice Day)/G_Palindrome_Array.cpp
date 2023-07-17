// // *******************************First Way***************************
#include<bits/stdc++.h>
using namespace std;
int main()
{  
    int n;
    cin>>n;
    // int ar[n];
    vector<int>ar(n);
    for(int i=0;i<n;i++)
    {
        cin>>ar[i];
    }
    int flag=1;

    for(int i=0,j=n-1;i<n,j>=0;i++,j--)
    {
        if(ar[i]!=ar[j])
            {
                flag=0;
                break;
            }    
    }
    if (flag==1)
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }

  return 0;
}

// ******************************** Second Way ********************************
// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {  
//     int n;
//     cin>>n;
//     // int ar[n];
//     vector<int> ar(n); // verctor is used delcare array dynamically
//     for(int i=0;i<n;i++)
//     {
//         cin>>ar[i];
//     }
//     int flag=1;

//     for(int i=0;i<n/2;i++) 
//     {
//         if(ar[i]!=ar[n-i-1])
//         {
//             flag=0;
//             break;
//         }
        

//         // for(int j=n-1;j>=0;j--)
//         // {
//         //     if(ar[i]!=ar[j])
//         //     {
//         //         flag=0;
//         //     }
//         //     else
//         //     {
//         //         flag=1;
//         //     }
//         // }
//     }
//     if (flag==1)
//     {
//         cout<<"YES";
//     }
//     else
//     {
//         cout<<"NO";
//     }

//   return 0;
// }



