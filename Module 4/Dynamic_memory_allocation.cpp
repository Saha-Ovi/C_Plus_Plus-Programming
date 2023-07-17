#include <bits/stdc++.h>

using namespace std;
class Person 
{
    public:
    char name[100];
    float height;
    int age;
    Person(char *n,int a,float h)
    {
       age =a;
        height=h;
        strcpy(name,n);
    }
};

int main()
{
    char n[100]="Ovi Saha";
    Person *Ovi= new Person(n,21,5.2);
    cout<<(*Ovi).age<<endl;
    cout<<(*ovi).name<<endl;


    return 0;
}