#include<bits/stdc++.h>
using namespace std;
class Student 
{
    public:
    string name;
    int roll;
    int marks;
};
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
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(ar[i].marks>ar[j].marks) //for ascending sort
            {
                swap(ar[i],ar[j]); // ar[i] & ar[j] puro property niye swap kore felo
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        cout<<ar[i].name<<" "<<ar[i].roll<<" "<<ar[i].marks<<endl;
    }
    
  return 0;
}
