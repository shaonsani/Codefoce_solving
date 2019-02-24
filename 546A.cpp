#include<bits/stdc++.h>
using namespace std;


int main()
{
    int k,n,w,i,sum=0,sum1=0;
    cin>>k>>n>>w;
    for(i=1;i<=w;i++)
    {
        sum+=i*k;
    }
    if(sum>=n)
    {
        cout<<sum-n<<endl;
    }else
    {
        cout<<sum1<<endl;
    }



    return 0;
}
