#include<bits/stdc++.h>
using namespace std;
int main()
{  
    int n;
    cin>>n;
    int count[26]={0};
      for(int i=0;i<n;i++)
      {
        char a;
        cin>>a;
        count[a-'a']++;
      }
      // *********************** Way One *****************************

      // for(char i='a';i<='z'; i++)
      // {
      //   if(count[i-'a']>0)
      //   {
      //     for(int j=0;j<count[i-'a'];j++)
      //     {
      //       cout<<i;
      //     }

      //   }
      // }
      for(int i=0;i<26;i++)
      {
         if(count[i]>0)
         {
            while(count[i]--)
            {
              cout<<char(i+'a');
            }
         }
      }

  return 0;
}