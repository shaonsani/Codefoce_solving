#include<stdio.h>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    int cn=0,cm=0,cnt=0;
    int i;
    cin>>s;
    for(i=0;i<s.size();i++)
    {
        if(s[i]=='1')
        {
            cm=0;
            cn++;
            if(cn>=7)
            {
                cnt++;
                break;

            }
        }
        else if(s[i]=='0')
        {
            cn=0;
            cm++;
            if(cm>=7)
            {
                cnt++;
                break;

            }
        }

    }

    if(cnt==1)
    {
        cout<<"YES"<<endl;
    }
     else
            cout<<"NO"<<endl;

    return 0;

}
