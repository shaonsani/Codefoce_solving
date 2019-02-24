#include <bits/stdc++.h>
using namespace std;

typedef vector<int>  vi;
#define vec(a)  a.begin(),a.end()
#define pb     push_back

int main()
{
    int n,m,mov;
    cin>>n>>m;
    mov=min(n,m);
    if(mov%2==0)
    {  cout<<"Malvika"<<endl;
    }else
    cout<<"Akshat"<<endl;

    return 0;
}

