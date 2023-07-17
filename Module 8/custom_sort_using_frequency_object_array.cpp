#include<bits/stdc++.h>
using namespace std;
class CustomSort
    {
        public :
        char c;
        int count;
    };

// comparing a & b for sorting 
    bool cmp(CustomSort a,CustomSort b)
    {
        if(a.count>b.count) return true;
        else return false;
    }


int main()
{  
    int n;
    cin>>n;
    CustomSort frq[26]; //declareing single object array for a,b,c...z in which every object can
    // carray char n and count

    for(int i=0;i<26;i++)  //initialize charter value and count(frequency count) to Zero
    {
       frq[i].c=(i+'a'); //frq 0 index e a & count 0 frq 1 e b & count 0 ebhave 26 character
    //    single single ekta array
       frq[i].count=0;
    }
    for(int i=0;i<n;i++)
    {
        char c;
        cin>>c;
        frq[c-'a'].count++;
    }
    //sorting array value
    sort(frq,frq+26,cmp);

    for(int i=0;i<26;i++)
    {
        if(frq[i].count>0)
        {
            // while(frq[i].count--)
            // {
            //     cout<<frq[i].c;
            // }
            for(int j=0;j<frq[i].count;j++)
            {
                cout<<frq[i].c;
            }
        }

    }
  return 0;
}