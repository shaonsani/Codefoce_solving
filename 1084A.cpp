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
    int n,a,sum=0,minimum=1505242;
    cin>>n;
    int arr[n+1];
    for(int i=1; i<=n; i++)
    {
        cin>>arr[i];
    }
    for(int i=1; i<=n; i++)
    {
        sum=0;
        for(int j=1; j<=n; j++)
        {
           int up_down=abs(j-i)+abs(j-1)+abs(1-i)+abs(i-1)+abs(1-j)+abs(i-j);
           up_down*=arr[j];
           sum+=up_down;

        }

        minimum=min(minimum,sum);
    }
    cout<<minimum<<endl;








return 0;

}

