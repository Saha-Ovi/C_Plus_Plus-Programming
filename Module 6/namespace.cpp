#include<bits/stdc++.h>
using namespace std;
// ************** namespace er vitore fun name ek thakle *************
namespace shakib
{
    int age=10;
    
    // float b=5.2;
    void fun()
    {
        cout<<"Let's have fun Baby";
    }
}
namespace ovi
{
    // int age = 24;
    int age2 = 24;
    // void fun()
    // {
    //     cout<<"Going to party Baby";

    // }
    void fun2()
    {
        cout<<"Going to party Baby";

    }
    
}

// using namespace shakib;
// int main()
// {  
//    cout<<age<<endl;
//    fun();
//    cout<<endl;
// //    fun() duita namespace ek thakai ekta namespace shakib arekta ovi::fun ebahve tene ene print
// // korechi 
//    ovi::fun();
//    cout<<endl;
//    cout<<ovi::age<<endl;
//   return 0;
// }
using namespace shakib;
using namespace ovi;
int main()
{  
   cout<<age<<endl;
   fun();
   cout<<endl;
//    fun() duita namespace alada thakai and function name alada hole eibahve print kore
// korechi 
   fun2();
   cout<<endl;
   cout<<age2<<endl;
  return 0;
}