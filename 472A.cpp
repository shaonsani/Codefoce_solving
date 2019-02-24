#include <bits/stdc++.h>
using namespace std;

typedef vector<int>  vi;
#define vec(a)  a.begin(),a.end()
#define pb     push_back

int main()
{   int n;
    while(scanf("%d",&n) && n>=12)
    {
     if(n%2==0){
        cout<<"8 "<<(n-8)<<endl;
        break;
    }
    else
        cout<<"9 "<<(n-9)<<endl;
        break;


    }

    return 0;

}

