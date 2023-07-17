#include <bits/stdc++.h>

using namespace std;
int *get_array(int n)
{
    // int a[n]; //normal array declaration
    int *a= new int[n]; //Dynamic array declaration
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    return a;

}

int main()
{
    int n;
    cin>>n;
    int *sum=get_array(n);
    for(int i=0;i<n;i++)
    {
        cout<<sum[i]<<" ";
    }


    return 0;
}