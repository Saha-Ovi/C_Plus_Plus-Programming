#include<bits/stdc++.h>
using namespace std;
int main()
{  
    int n;
    cin>>n;
    int ar[n];
    for(int i=0;i<n;i++)
    {
        cin>>ar[i];
    }
    sort(ar,ar+n);
    for(int i=0;i<n;i++)
    {
        cout<<ar[i]<<" ";
    }

  return 0;
}








// #include <iostream>
// #include <algorithm>
// #include <string>

// int main()
// {  
//     int n;
//     std::cin >> n;
//     std::string s;
//     std::cin >> s;

//     std::sort(s.begin(), s.end());
    
//     std::cout << s;

//     return 0;
// }
