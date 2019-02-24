#include <bits/stdc++.h>

using namespace std;

int main()
{
    string first,second,ans;


    cin>>first>>second;
    for(int i=0; i<first.length(); i++)
    {

        if(first[i]!=second[i])
        {
            first[i]='1';



        }
        else
        {
            first[i]='0';


        }

    }
    cout<<first<<endl;
    return 0;
}

