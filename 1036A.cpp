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
    ll n,k,a;
    cin>>n>>k;
    a=k/n;
    if(k%n)
    {a++;}
    cout<<a<<endl;

    return 0;

}

