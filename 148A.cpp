#include<bits/stdc++.h>
#include <stdio.h>
#include <string.h>
using namespace std;

int main()
{

    int k,l,m,n,d,c=0;
    cin>>k>>l>>m>>n>>d;
    d++;
    int arr[d];
    if(k==1)
    {
     for(int i=k;i<d;i+=k)
     {
        c++;

     }
     cout<<c<<endl;
     return 0;
    }

    memset(arr, -1, d*sizeof(arr[0]));


    for(int i=k;i<=d;i=i+k)
    {
        if(arr[i]==-1)
        {

            arr[i]=2;

        }
    }

    for(int i=l;i<=d;i=i+l)
    {
       if(arr[i]==-1)
        {
            arr[i]=2;

        }
    }

    for(int i=m;i<=d;i=i+m)
    {
       if(arr[i]==-1)
        {
            arr[i]=2;

        }
    }

    for(int i=n;i<=d;i=i+n)
    {
       if(arr[i]==-1)
        {
            arr[i]=2;

        }
    }

     for(int i=0;i<=d;i++)
    {
        if(arr[i]==2)
        {
            c++;
        }
    }
    cout<<c<<endl;



    return 0;
}
