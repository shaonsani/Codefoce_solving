#include <bits/stdc++.h>
using namespace std;

typedef vector<int>  vi;
typedef set<char> setchar;
typedef long long ll;
#define vec(a)  a.begin(),a.end()
#define pb     push_back


int main()
{
int n,c=0;cin>>n;int arr[n+1];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    arr[n]=arr[n-1]+1;
    for(int i=1;i<=n;i++)
    {
        if(arr[i]-arr[i-1]==1 && arr[i+1]-arr[i]==1)
        {
            c++;
        }
    }
    cout<<c<<endl;
    return 0;

}


