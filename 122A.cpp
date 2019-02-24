#include<bits/stdc++.h>
using namespace std;

int main()
{
    int s;
    cin>>s;
    if(s==4||s==47||s==744||s%4==0||s%7==0||s%47==0||s%744==0||s==477)
    {
        cout<<"YES"<<endl;
    }
    else
        cout<<"NO"<<endl;

    return 0;
}
