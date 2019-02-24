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
    int t,a=0;
    cin>>t;
    int arr;
    for(int i=0; i<t; i++)
    {   a=0;
        cin>>arr;
        for(int j=7;j>=2;j--)
        {
            a+=arr/j;
            arr=arr%j;
        }
        if(arr==0)
            cout<<a<<endl;
        else
            cout<<a+1<<endl;


    }


    return 0;

}
