#include<bits/stdc++.h>
using namespace std;
int main()
{  
    string a;
    // string::iterator it; //auto use korle eta use kora lagbe nah
    cin>>a;

    // for(int i=0;i<a.size();i++)
    // {
    //     cout<<a[i]<<endl;
    // }
    // cout<<*a.begin()<<endl;
    // cout<<*(a.end()-1)<<endl;

    // without auto

    // for(it=a.begin();it<a.end();it++) //ekhane se string first index address niyeche &address wise jacche
    // // erpor dereference kore value print kortechi
    // {
    //     cout<<*it<<" ";
    // }
    
    for(auto it=a.begin();it<a.end();it++) //ekhane se string first index address niyeche &address wise jacche
    // erpor dereference kore value print kortechi
    {
        cout<<*it<<" ";
    }

  return 0;
}