#include <bits/stdc++.h>
using namespace std;

typedef vector<int>  vi;
typedef set<char> setchar;
typedef long long ll;
#define vec(a)  a.begin(),a.end()
#define pb     push_back


int main()
{
    int n,c,i=0,org;
    cin>>n;
    c=n;
    double sum;
    while(n>0)
    {
        cin>>org;
        sum=sum+org;
        n--;
    }
    cout<<setprecision(12)<<fixed<<sum/c<<endl;



    return 0;

}



