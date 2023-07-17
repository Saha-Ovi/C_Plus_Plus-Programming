#include<bits/stdc++.h>
using namespace std;
int main()
{  
    // string x,y;
    // cin>>x>>y;
    // // x=x+y; //concatenation
    // // x+=y;
    // x.append(y);
    // // **********Push_back('A')
    // // string z="A";
    // // x=x+z;
    // // // x=x+"A"; //works like push_back('A')
    // // // x=x+'A';
    // x.push_back('A');

    // cout<<x<< endl;
    // x.pop_back();
    // cout<<x;
    
  string a;

  // a="Ovi_Saha"; //assign
  a.assign("Ovi_Saha"); //assign
  // a.erase(3,1); //index number 3 theke character 1 ta delete hobe
  // a.replace(3,1,"&"); //index number 3 theke character 1 ta delete hobe & oi string ta replace hobe
  a.insert(3,"&");
  cout<<a;

  return 0;
}