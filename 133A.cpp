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
        if(s[i]=='H'||s[i]=='Q'||s[i]=='9')
         c++;
    }

    if(c>=1)
    cout<<"YES";
         else
            cout<<"NO";

    return 0;
}
