#include <bits/stdc++.h>
using namespace std;

typedef vector<int>  vi;
typedef set<char> setchar;
typedef long long ll;
#define vec(a)  a.begin(),a.end()
#define pb     push_back


int main()
{
    int n,m,c=0;
    cin>>n>>m;
    for(int j=1; j<=n; j++)
    {
        if(j%2==1)
        {
            for(int i=0; i<m; i++)
            {
                cout<<"#";
            }
            cout<<endl;

        }

        if(j%2==0)
        {
            c++;
            if(c%2==1)
            {
                for(int i=0; i<m-1; i++)
                {
                    cout<<".";
                }
                cout<<"#"<<endl;
            }
            else
            {   cout<<"#";
                for(int i=0; i<m-1; i++)
                {
                    cout<<".";
                }
                cout<<endl;
            }


        }


    }

    return 0;

}

