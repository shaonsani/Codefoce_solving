#include<bits/stdc++.h>

using namespace std;
int main()
{
    int n,i;
    int a,b,c;
    int cnt=0;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a>>b>>c;
        if((a+b+c)>=2)
        {
            cnt++;
        }
    }
    cout<<cnt;



    return 0;
}
