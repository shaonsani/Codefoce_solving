#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,i;
    cin>>n;
    int m=0;
    int aa=0;

    for(i=0;i<n;i++)
        {
            int a,b;
        cin>>a>>b;

        aa=aa-a;

        aa=aa+b;
         if(aa>m)
         {
             m=aa;
         }

        }



    cout<<m;

    return 0;
}
