
#include<bits/stdc++.h>
using namespace std;

int main()
{

    int a,b,c,sum[6];
    cin>>a>>b>>c;
    sum[0]=a+b+c;
    sum[1]=a*b*c;
    sum[2]=a+b*c;
    sum[3]=(a+b)*c;
    sum[4]=a*(b+c);
    sum[5]=a*(b+c);
    sort(sum,sum+6);
    cout<<sum[5]<<endl;




    return 0;
}
