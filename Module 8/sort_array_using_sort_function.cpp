#include<bits/stdc++.h>
using namespace std;
class Student 
{
    public:
    string name;
    int roll;
    int marks;
};
// bool function used to check that the marks of a is greater tha b kina
// true hole ok false hole sort korbe
bool cmp(Student a, Student b)
{
    if(a.marks>b.marks) return true;
    else return false;
}
int main()
{  
    int n;
    cin>>n;
    cin.ignore();
    Student ar[n];
    for(int i=0;i<n;i++)
    {
        // cin>>ar[i].roll>>ar[i].marks;
        // cin.ignore();
        // getline(cin,ar[i].name);

        getline(cin,ar[i].name);
        cin>>ar[i].roll>>ar[i].marks;
        cin.ignore();  
    }
   sort(ar,ar+n,cmp); //eikhane age array first last index check kortam ekhon tar sathe cmp function
//    add hoyeche

    for(int i=0;i<n;i++)
    {
        cout<<ar[i].name<<" "<<ar[i].roll<<" "<<ar[i].marks<<endl;
    }
    
  return 0;
}