#include<bits/stdc++.h>
using namespace std;
class Person
{
    public:

    string name;
    int age;
    int marks1,marks2;

    // constructor
    Person(string nm,int ag,int m1,int m2)
    {
        name=nm;
        age=ag;
        marks1=m1;
        marks2=m2;
    } 
    // function
    void hello()
    {
        cout<<name<<" "<<age<<endl;
    }
    int print()
    {
        return marks1+marks2;
    }


};
int main()
{  
    // object 
    Person ovi("Ovi Saha",29,85,95);
    // ebhave bar bar likhe print korar chaite function call
    cout<<ovi.age<<endl;
    cout<<ovi.name<<endl;

    // object diye call korte hoi function ke
    ovi.hello();
    // int marks=ovi.print();
    // cout<<marks<<endl;
    cout<<ovi.print()<<endl;




  return 0;
}