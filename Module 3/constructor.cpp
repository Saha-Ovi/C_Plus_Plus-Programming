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

int main()
{
    //Not the right way because the value of string rahim or karim
    //converting string to character

//    Student rahim(30,'A',6,"Rahim");
//    Student karim(35,'D',9,"Karim");

// ******************* right way **********************
    char n [100]="Rahim";
    char m[100] = "karim";
    Student rahim(30,'A',6,n);
   Student karim(35,'D',9,m);
   cout<<rahim.section<<endl;
   cout<<karim.section<<endl;
   cout<<rahim.name<<endl;
   cout<<karim.name<<endl;


    return 0;
}