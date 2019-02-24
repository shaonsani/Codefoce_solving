#include <bits/stdc++.h>
using namespace std;

typedef vector<int>  vi;
typedef set<char> setchar;
typedef set<int> sett;
typedef long long ll;
#define vec(a)  a.begin(),a.end()
#define pb     push_back


int main()
{
    int n,k;
    cin>>n>>k;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+n);
    int x=0;
    for(int i=0; i<k; i++)
    {
        if(i >= n)
            cout<<"0"<<endl;
        else
        {
            cout<<arr[i]-x<<endl;
            x=arr[i];
        }

    }




    return 0;

}
