#include <bits/stdc++.h>
using namespace std;

typedef vector<int>  vi;
typedef set<char> setchar;
typedef long long ll;
#define vec(a)  a.begin(),a.end()
#define pb     push_back


int main()
{
    ll l,n,dis;
    double maxx=0;
    cin>>n>>l;
    int a[n];
    for(int i=0; i<n; i++)
    cin>>a[i];
    sort(a,a+n);
    for(int i=1;i<n;i++)
    {
       dis=a[i]-a[i-1];
       if(dis>maxx)
       maxx=dis;

    }
    maxx=(double)maxx/2;
    maxx=(double)max(maxx,(double)a[0]);   //comparing starting lantern value, cause if it's not it's starting of street lenght then it should cover that distance along

    maxx=(double)max(maxx,((double)l-a[n-1])); //comparing ending lantern value sub street length because if it's not it's end of street lenght then it should cover that distance along


    cout<<setprecision(10)<<fixed<<maxx<<endl;


    return 0;

}


