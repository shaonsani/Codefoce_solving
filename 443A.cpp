#include <bits/stdc++.h>
using namespace std;

typedef vector<int>  vi;
typedef set<char> setchar;
#define vec(a)  a.begin(),a.end()
#define pb     push_back

int main()
{   setchar sett;
    string s;
    getline(cin,s);
    for(int i=0; i<s.length(); i++)
    {
        if(s[i]>=97 && s[i]<=122)
        {
        sett.insert(s[i]);

        }

    }
    cout<<sett.size()<<endl;

    return 0;

}


