#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    int s1[100];
    int i=0,v,j=0;
    cin>>s;

    for(i=0;i<s.length();i++)
    {
        if(s[i]=='1'||s[i]=='2'||s[i]=='3')
        {
            v=atoi(&s[i]);
            s1[j]=v;
            j++;

        }
    }
    sort(s1,s1+j);
    for(i=0;i<j;i++)
    {
        cout<<s1[i];
        if(i<j-1)
            cout<<"+";
    }


    return 0;
}
