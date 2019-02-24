#include<bits/stdc++.h>
using namespace std;


int main()
{
    int n,i,m;
    cin>>n;
    int a[n],k[n];
    for(i=1;i<=n;i++)
    {
        cin>>a[i];


    }
     for(m=1;m<=n;m++)
    {
        for(i=1;i<=n;i++)
        {
            if(a[i]==m)
                cout<<i<<endl;
        }


    }




    return 0;
}
