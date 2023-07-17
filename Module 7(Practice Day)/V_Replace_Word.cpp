#include<bits/stdc++.h>
using namespace std;
int main()
{  
    string s;
    cin>>s;  // string input
    while(s.find("EGYPT")!=-1) //find func looking EGYPT if find return first index of EGYPT 
    {
        // replace( (EGYPT) first index, size of EGYPT , replace with space)
        s.replace(s.find("EGYPT"),5," "); // replace with space
    }
    cout<<s;

  return 0;
}