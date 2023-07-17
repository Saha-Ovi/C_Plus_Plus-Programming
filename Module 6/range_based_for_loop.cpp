#include<bits/stdc++.h>
using namespace std;
int main()
{  
    string s;
    cin>>s;

    // ************ Way 1 ***********************
    // We will get string value as well as inedx value using this

    // for(int i=0;i<s.size();i++)
    // {
    //     cout<<s[i]<<" ";
    // }

     // ************ Way 2 ***********************
    // char c te string s ekta ekta string value diteche
    //We will get onlyyyyyy string value from range based for loop 
    // range based for loop special kichu class e declare kora jai tar moodhe string one of them

        for(char c:s)
        {
            cout<<c<<" ";
        }

  return 0;
}