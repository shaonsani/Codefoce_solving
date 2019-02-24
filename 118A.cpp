#include<bits/stdc++.h>
#include<stdio.h>
#include <string>
#include <iostream>
using namespace std;

bool vowel(char c)
{
    return (c=='a'|| c=='e'||c=='i'||c=='o'||c=='u'||c=='y');
}


int main()
{
    string s;
    char c;
    cin>>s;

      for(int i=0;i<s.length();i++)
    {
        s[i]=tolower(s[i]);

    }
    for(int i=0;i<s.length();i++)
    {
        if(!vowel(s[i]))
        {
            cout<<"."<<s[i];
        }

    }
    cout<<endl;




}
