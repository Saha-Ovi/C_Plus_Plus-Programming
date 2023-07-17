#include <bits/stdc++.h>

using namespace std;
class Student // here student is the user defined data type and assume class as a blueprint or group
{
public: // acces modifier
    char name[100];
    int roll;
    int cls;
    char section;
    Student(int r,int c,char s,char* n)
    {
        roll=r;
        cls=c;
        section=s;
        strcpy(name,n);
    }
};
int main()
{
    char name[100]="Ovi Saha";
    // ***************** Dynamic Object ********************

    Student *ovi = new Student(37,9,'A',name);
    cout<<ovi->name<<endl;
    cout<<(*ovi).cls<<endl;

    // *********************** Delete object **************************


    return 0;
}