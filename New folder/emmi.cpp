#include<bits//stdc++.h>
using namespace std;
int main()
{
    int *n=new int; // dynamically allocated variable
    cin>>*n;
    
    int *a=new int [5]; //dynamically allocated array
    for(int i=0;i<5;i++)
    {
        cin>>a[i];
    }
    int *z=new int[7]; // increase the size of array
    for(int i=0;i<5;i++)
    {
        z[i]=a[i];
    }
    z[5]=60;
    z[6]=70;
    cout<<*n<<endl;
    for(int i=0;i<7;i++)
    {
        cout<<z[i]<<" ";
    }
    cout<<endl;
    delete n; // delete value
    delete[] a; //delete unused array to save memory
    cout<<*n<<endl; //to check that value is deleted or not
    for(int i=0;i<5;i++)
    {
        cout<<a[i]<<" "; //to check that array is deleted or not
    }
    
}