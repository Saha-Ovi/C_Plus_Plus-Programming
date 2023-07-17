#include<bits/stdc++.h>
using namespace std;
int main()
{  
    string s;
    cin>>s;
    cout<<s.size()<<endl;
    // cout<<s.max_size()<<endl; //Max size is the last size to be stored
    // cout<<s.capacity()<<endl;
    // s.clear();
    // if(s.empty()==true) cout<<"Empty";
    // else cout<<"Not Empty";
    s.resize(5); //size decrease korle extra charater dewa lage nah
    s.resize(8,'X'); // size increase korle character extra dewa lage
    cout<<s;

  return 0;
}