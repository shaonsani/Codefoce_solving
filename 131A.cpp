#include<bits/stdc++.h>
using namespace std;
#define lp for(i=0;i<s.size();i++)
int main()
{
    string s;
    cin>>s;
    int i,c=0;
    lp
    {
        if(s[i]==tolower(s[i]))
            c++;
    }
    if(c==0)
    {
        lp
        s[i]=tolower(s[i]);
        cout<<s;
    }
    else if(c==1 && s[0]==tolower(s[0]))
    {
        s[0]=toupper(s[0]);

       for(i=1;i<s.size();i++)
       {
           s[i]=tolower(s[i]);
       }
       cout<<s;
    }
    else
        cout<<s;





    return 0;
}

