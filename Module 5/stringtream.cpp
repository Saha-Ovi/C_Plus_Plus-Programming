#include<bits/stdc++.h>
using namespace std;
int main()
{  
    string s;
    getline(cin,s);
    // stringstream ss(s); //evbahve dui liner kaj ekline e kora jai
    stringstream ss; //stringstream is a to see word by word in string
    ss<<s; // copy s string variable or object value to ss
    string word; //to store word from ss to word
    int cnt=0;
    // ******Extractiing word from Sentence***************
    // while(ss >> word)
    // {
    //     cout<<word<<" ";
    // }
    // **********count the number of value*******************
    while(ss >> word)
    {
        cnt++;
    }
     cout<<cnt;

  return 0;
}