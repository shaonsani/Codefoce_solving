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
    long long a,d,m,g,p,b,aa=0,dd=0,mm=0;
    cin>>a>>d>>m;
    cin>>g>>p>>b;
    int tot=p+b;
    if(g>=a)
    {
        aa++;
        g=g-a;
    }
    if(p+g>=d)
    {
     dd++;
     tot=tot-d;

    }
    long long  total=tot+g;
    if(total>=m)
    {
    mm++;
    }

    if(mm>0 && aa>0 && dd>0)
    {cout<<"YES"<<endl;}
    else
    cout<<"NO"<<endl;


    return 0;

}

