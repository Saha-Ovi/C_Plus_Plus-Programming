#include<bits/stdc++.h>
using namespace std;
class Student 
{
    public :
    string name;
    int roll;
    int marks;

// array of obejct e vitroe constructor neya hoi nah karon 100 ta array value joono 100 bar call kora impossobile
    

};
int main()
{  
    // int a[5];
    Student ar[3];
    for(int i=0;i<3;i++)
    {
        // cin>>ar[i] // ar[i] ekhon ar int array noi eta ekhon array object or group jar bitore onek gulo data ache
        // cin>>ar[i].roll>>ar[i].marks>>ar[i].name;

         getline(cin,ar[i].name);
        cin>>ar[i].roll>>ar[i].marks;
        cin.ignore(); //Ekhane marks er pore ekta enter ase jeta get line count kore output junk
        // value diteche
    }
    for(int i=0;i<3;i++)
    {
        cout<<ar[i].name<<" "<<ar[i].marks<<" "<<ar[i].roll<<endl;
    }


  return 0;
}
