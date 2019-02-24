#include<bits/stdc++.h>


using namespace std;
int main()
{
    int n,c1=0,c2=0,c3=0,c4=0,sum=0,a;
    cin>>n;
    for(int i=0;i<n;i++)
    {   cin>>a;
        if (a==1) c1++;
        if(a==2) c2++;
        if (a==3) c3++;
        if(a==4) c4++;
    }
    sum=sum+c4;
    c4=0;
    sum=sum+c2/2;
    c2=c2%2;
    if(c1>=c3)
    {
      sum=sum+c3;
      c1=c1-c3;
      sum=sum+c1/4;
      c1=c1%4;
      if(c1 + c2*2>0 && c1+c2*2<=4)
      {
       sum++;

      }
      else if(c1==3 && c2==1)
      {
        sum=sum+2;

      }

    }
    else
    {
     sum=sum+c1;
     c3=c3-c1;
     sum=sum+c3+c2;


    }
    cout<<sum<<endl;




    return 0;
}
