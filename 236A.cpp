#include<bits/stdc++.h>
using namespace std;

int main()
{
    int cnt=0,i,j;
    char s[100];
    cin>>s;
    int x=strlen(s);
    sort(s,s+x);
    for(i=0;i<x;i++)
    {
        cnt++;
       if(s[i]==s[i+1])
        {
            cnt--;
        }
    }
   if(cnt%2==0)
    {
        cout<<"CHAT WITH HER!"<<endl;
    }
    else
    {
       cout<<"IGNORE HIM!"<<endl;
    }


    return 0;
}
