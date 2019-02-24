#include<bits/stdc++.h>


using namespace std;
int main()
{
    int t,twin=0,total=0;
    cin>>t;
    int money[t];
    for(int i=0;i<t;i++)
    {
      cin>>money[i];


    }
    sort(money,money+t);
    for(int i=0;i<t;i++)
    {

     total+=money[i];

    }
    total=total/2;
    int c=0;
     while(twin<=total)
     {
       c++;
       twin=twin+money[t-c];
     }
     cout<<c<<endl;





    return 0;
}
