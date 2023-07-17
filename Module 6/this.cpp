#include<bits/stdc++.h>
using namespace std;
class Person
{
    public:
    string name;
    int age;
    Person(string name,int age)
    {
        this->age=age;
        this->name=name;
    }
    void hello()
    {
        cout<<"Hello";
    }

};
int main()
{  
    Person ovi("Ovi Saha",29);
    cout<<ovi.name<<endl;
    cout<<ovi.age<<endl;

  return 0;
}