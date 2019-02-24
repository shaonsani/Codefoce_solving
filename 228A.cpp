#include <bits/stdc++.h>
using namespace std;

typedef vector<int>  vi;
typedef set<char> setchar;
#define vec(a)  a.begin(),a.end()
#define pb     push_back

int main()
{

   int i,a[10],cnt=0;
    for(i=0;i<4;i++){
        cin>>a[i];
    }
    sort(a,a+4);
    for(i=0;i<3;i++){
        if(a[i]==a[i+1]){
            cnt++;
        }
    }
    cout<<cnt<<endl;
    return 0;
}

