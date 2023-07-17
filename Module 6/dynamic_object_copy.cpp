#include<bits/stdc++.h>
using namespace std;
class player
{
    public:
    string name;
    int run;
    player(string name,int run)
    {
        (*this).name=name;
        this->run=run;

    }

};

int main()
{  
    player *kohlli=new player("Virat Kholi",101);
    player *shakib=new player ("Shakib Al Hasan",55);

    //dynamic object print
    // cout<<kohlli->name<<endl;
    // cout<<((*shakib).name)<<endl;

    // No.1 way for copy dynamic object all 
    // dereference kore shakib er shob value kholi ke diye dewa

    *kohlli=*shakib;

    // No.2 way for copy dynamic object
    // evbahe alada alada kore value dewa

    // kohlli->name=shakib->name;
    // kohlli->run=shakib->run;

    cout<<kohlli->name<<endl;

  return 0;
}