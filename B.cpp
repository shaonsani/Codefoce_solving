#include<bits/stdc++.h>
using namespace std;

int main()
{

    int t,a,c=0;
    cin>>t;
    while(t>0)
    {
        cin>>a;
        if (a>=100)
        {
         a=a/100;
         c+=a;
        }
        t--;
    }

    cout<<c<<endl;

    return 0;
}
