#include<bits/stdc++.h>
using namespace std;
int main()
{  
    int n;
    cin>>n;
    char s[n+1]; // for allocating null character
    for(int i=0;i<n;i++)
    {
        cin>>s[i];
    }
    s[n]='\0';
    sort(s,s+n);
    for(int i=0;i<n;i++)
    {
       cout<<s[i];
    }

  return 0;
}
