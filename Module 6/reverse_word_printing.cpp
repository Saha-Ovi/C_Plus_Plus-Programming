#include<bits/stdc++.h>
using namespace std;
void print(stringstream & ss) //stringstream must be referenced by & or it will show wrong 
{
    string word;
    if(ss >> word )
    {
        print(ss);
        cout<<word<<" ";
        
    }
}
int main()
{  
    string s;
    getline(cin,s);
    stringstream ss(s);
    print(ss);


  return 0;
}