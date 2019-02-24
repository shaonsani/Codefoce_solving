#include <bits/stdc++.h>
using namespace std;

typedef vector<int>  vi;
typedef set<char> setchar;
typedef set<int> sett;
typedef long long ll;
#define vec(a)  a.begin(),a.end()
#define pb     push_back
void init()
{
    ios_base::sync_with_stdio(NULL);
    cin.tie(NULL);
    cout.tie(NULL);
}

int main()
{
    init();
    int n,v,c=0,sum=0,f=0;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        if(arr[i]/2>=2 && f==0)
        {
            c=i;
            v=arr[i]/2;
            f=1;

        }
        else
        sum+=arr[i];


    }
    sort(arr,arr+n);
    sum=sum-arr[0];
    arr[0]=arr[0]*v;
    sum=sum+arr[0]+v;

    cout<<sum<<endl;



    return 0;

}

