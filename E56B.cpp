#include <bits/stdc++.h>
#include<iostream>
using namespace std;

typedef vector<int>  vi;
typedef set<char> setchar;
typedef set<int> sett;
typedef long long ll;
#define vec(a)  a.begin(),a.end()
#define pb     push_back


int main()
{
    int t;
    string s1,s2;
    cin>>t;
    for(int l=0; l<t; l++)
    {
        cin>>s1;

        sort(s1.begin(),s1.end());
         s2=s1;
         reverse(s2.begin(),s2.end());
        if(s1==s2)
        {
            cout<<"-1"<<endl;
        }
        else
        {
            cout<<s1<<endl;
        }



    }


    return 0;

}

