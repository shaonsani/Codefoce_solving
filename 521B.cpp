#include <bits/stdc++.h>
using namespace std;

typedef vector<int>  vi;
typedef set<char> setchar;
typedef long long ll;
#define vec(a)  a.begin(),a.end()
#define pb     push_back


int main()
{
    int n,c=0;
    vi v;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }

    for(int i=1; i<n; i++)
    {
        if(arr[i-1]==1 && arr[i+1]==1 && arr[i]==0)
        {
            c++;
            i=i+2;
        }

    }
    cout<<c<<endl;



    return 0;

}
