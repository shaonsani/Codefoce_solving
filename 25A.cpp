#include <bits/stdc++.h>
using namespace std;

typedef vector<int>  vi;
#define vec(a)  a.begin(),a.end()
#define pb     push_back

int main()
{
    int n,a(0),b(0);
    cin>>n;
    int arr[n+1];
    vi ab;
    vi bc;

    for(int i=1; i<=n; i++)
    {
        cin>>arr[i];

    }

    for(int i=1; i<=n; i++)
    {
        if(arr[i]%2==0)
        {
            a++;
            ab.pb(i);
        }
        else
        {
            b++;
            bc.pb(i);
        }

    }
    if(a>b)
    {cout<<bc[0]<<endl;
    }else
    cout<<ab[0]<<endl;








}

