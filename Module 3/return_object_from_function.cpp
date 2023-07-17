#include <bits/stdc++.h>

using namespace std;
class Student 
{
    public:
    char name[100];
    int cls;
    int roll;
    char section;
    Student(int r,char s,int c,char* n)
    {
        roll=r;
        cls=c;
        section=s;
        strcpy(name,n);
    }
};
    Student fun()
    {
        char name[100]="Rahim Ullah";
        Student r(25,'A',9,name);
        return r;
    }

int main()
{
    Student rahim=fun();
    cout<<rahim.roll<<endl;
   

    return 0;
}