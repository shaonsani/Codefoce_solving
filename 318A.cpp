#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long n, k,half;
    cin >> n >> k;
    if(n%2==0)
    {
        half=n/2;

    }
    else
        half=(n/2)+1;

    if(k<=half)
    {
        cout<<(k*2)-1<<endl;
    }
    else
        cout<<(k-half)*2<<endl;
    return 0;
}
