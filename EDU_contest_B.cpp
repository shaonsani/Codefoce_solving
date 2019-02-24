#include <bits/stdc++.h>
using namespace std;

typedef vector<int>  vi;
typedef set<char> setchar;
typedef long long ll;
#define vec(a)  a.begin(),a.end()
#define pb     push_back


vi v;
void SieveOfEratosthenes(int n)
{

    bool prime[n+1];
    memset(prime, true, sizeof(prime));

    for (int p=2; p*p<=n; p++)
    {

        if (prime[p] == true)
        {

            for (int i=p*2; i<=n; i += p)
                prime[i] = false;
        }
    }


    for (int p=2; p<=n; p++)
    {
        if (prime[p])
        {
            v.pb(p);
        }
    }
}


int main()
{
    int n,mic=11111 ;
    cin>>n;
    while(n>2)
    {
        SieveOfEratosthenes(n);
        for(int i=0; i<v.size(); i++)
        {
            if(v[i]<mic)
                mic=v[i];
        }
        n=n-mic;
    }
    cout<<n<<endl;


    return 0;
}



