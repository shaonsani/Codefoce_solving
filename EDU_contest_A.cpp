#include <bits/stdc++.h>
using namespace std;

typedef vector<int>  vi;
typedef set<char> setchar;
typedef long long ll;
#define vec(a)  a.begin(),a.end()
#define pb     push_back


int main()
{
    int n,maxx=0,fl=0;
    cin>>n;
    char arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    arr[n]='\0';
     for(int i=0; i<n; i++)
    {
        if(arr[i]>=maxx)
        {maxx=arr[i];
        fl=i;
        }
    }
    string str(arr);
    str.erase (fl,1);
    cout<<str<<endl;



    return 0;

}

