
#include<bits/stdc++.h>
using namespace std;
int main()
{  
    string letter;
    getline(cin,letter);
    bool inside_word=false; // inside word vitore change hobe biday false assume korlam new word starting e
     int count =0;
    // Manually word extract korte hobe
    for(char c : letter)
    {
        if (isalpha(c)) //for(c>='a' && c<='z'||c>='A' && c<='Z') isalpha(c) internallay evbhave function kore
        {
            if(inside_word==false)
            {
                count++;
            }
            inside_word=true;
        }
        else
        {
            inside_word=false;
        }
       
    }
    cout<<count;
  return 0;
}
// ********************2nd way only for space using stringstream***************************
// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {  
//     string letter;
//     getline(cin,letter);
//     // cin.ignore();
//     // stringstream space count kore only eikhane space bade o other character ache ja diye arekta word bujhai
//     // stringstream ss(letter);
//     // string word;
        // int count =0;
//     // while(ss >> word)
//     // {
//     //     count++;
//     // }
//     // cout<<count<<endl;
//   return 0;
// }
