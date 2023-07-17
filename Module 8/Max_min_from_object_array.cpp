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
    Student mx,mn;
    mx.marks=INT_MIN; //object declare korar pore obejct er jekhon property use korte pare
    mn.marks=INT_MAX;
    for(int i=0;i<n;i++)
    {
        if(ar[i].marks>mx.marks)  //to check ar[i] marks is greater than or not
        {
            mx=ar[i]; //greater than hole ar[i] er oi index full property mx ke diye daw
        }
    }
    for(int i=0;i<n;i++)
    {
        if(ar[i].marks<mn.marks)  //to check ar[i] marks is less than or not
        {
            mn=ar[i]; //less than hole ar[i] er oi index full property mn ke diye daw
        }
    }
    cout<<mx.name<<" "<<mx.roll<<" "<<mx.marks<<endl;
    cout<<mn.name<<" "<<mn.roll<<" "<<mn.marks<<endl;

  return 0;
}


// ************Taking object array size from user*****************

// #include<bits/stdc++.h>
// using namespace std;
// class Student 
// {
//     public:
//     string name;
//     int roll;
//     int marks;

// };
// int main()
// {  
//     int n;
//     cin>>n;
//     Student ar[n];
//     for(int i=0;i<n;i++)
//     {
//         getline(cin,ar[i].name);
//         cin>>ar[i].roll>>ar[i].marks;
//         cin.ignore();
//     }
//     Student mx,mn;
//     mx.marks=INT_MIN;
//     mn.marks=INT_MAX;
//     for(int i=0;i<n;i++)
//     {
//         if(ar[i].marks>mx.marks)  //to check ar[i] marks is greater than or not
//         {
//             mx=ar[i]; //greater than hole ar[i] er oi index full property mx ke diye daw
//         }
//     }
//     for(int i=0;i<n;i++)
//     {
//         if(ar[i].marks<mn.marks)  //to check ar[i] marks is less than or not
//         {
//             mn=ar[i]; //less than hole ar[i] er oi index full property mx ke diye daw
//         }
//     }
//     cout<<mx.name<<" "<<mx.roll<<" "<<mx.marks<<endl;
//     cout<<mn.name<<" "<<mn.roll<<" "<<mn.marks<<endl;

//   return 0;
// }