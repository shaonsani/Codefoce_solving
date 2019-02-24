#include <bits/stdc++.h>
using namespace std;

typedef vector<int>  vi;
typedef set<char> setchar;
typedef long long ll;
#define vec(a)  a.begin(),a.end()
#define pb     push_back


double fRand(double fMin, double fMax)
{
    double f = (double)rand() / RAND_MAX;
    return fMin + f * (fMax - fMin);
}

int main()
{
    double a,b,n,t;
    cin>>t;
    while(t>0)
    {
     cin>>n;
    b=fRand(n-1,n);
    a=n/b;
    if(ceil(a+b)==n || ceil(a*b)==n)
    {
        cout<<"Y "<<setprecision(9)<<fixed<<b<<" "<<a<<endl;
    }
    else
    cout<<"Y "<<endl;

    t--;

    }



    return 0;
}




