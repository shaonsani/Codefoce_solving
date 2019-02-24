#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,p,q,r,i,sum=0,sum1=0,sum2=0;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>p>>q>>r;
        sum+=p;
        sum1+=q;
        sum2+=r;

    }
    if(sum==0 && sum1==0 && sum2==0)
    {
        cout<<"YES"<<endl;
    }else
    cout<<"NO"<<endl;


    return 0;
}
