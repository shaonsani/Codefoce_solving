#include <bits/stdc++.h>
using namespace std;

typedef vector<int>  vi;
typedef set<char> setchar;
#define vec(a)  a.begin(),a.end()
#define pb     push_back

int main()
{
    long long n,m,temp;
    cin>>n>>m;
    long long  a[m];
    for(long long  i=0; i<m; i++)
    {
        cin>>a[i];
    }
    temp=a[0]-1;

    for(long long j=1; j<m; j++)
    {
        if(a[j]==a[j-1])
        {
            temp=temp;
        }
        else if(a[j]>a[j-1])
        {
            int c=a[j]-a[j-1];
            temp=temp+c;
        }
        else
        {
          long long var=(n+a[j])-a[j-1];
          temp=temp+var;

        }
    }
    cout<<temp<<endl;
    return 0;

}
