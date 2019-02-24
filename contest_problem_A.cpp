#include <bits/stdc++.h>
using namespace std;

typedef vector<int>  vi;
typedef set<char> setchar;
#define vec(a)  a.begin(),a.end()
#define pb     push_back

int main()
{
    long long  n,x(1),y(1);
    cin>>n;
    long long  arr[n+1][n+1];
    long long  a,b;
    long long  r=n,s=n;

    cin>>a>>b;
    for(long long  i=1; i<=n+1; i++)
    {   if(a==r && b==s)
        { cout<<"black"<<endl;
          return 0;
        }
        if(a==x && b==y)
        { cout<<"white"<<endl;
          return 0;
        }
        if(i%2==1)
        { //cout<<"i is  "<<i<<endl;
            if(a>x && b>y)
            {
                x++;
                y++;
               // cout<<"1 "<<endl;
            }
            else if(a<x && b<y)
            {
                x--;
                y--;
               // cout<<"2 "<<endl;
            }

            else if(a==x && b>y)
            {
                x=x;
                y++;
                //cout<<"3 "<<endl;
            }
            else if(a==x && b<y)
            {
                x=x;
                y--;
               // cout<<"4 "<<endl;
            }
            else if(a>x && b==y)
            {
                x++;
                y=y;
               // cout<<"5 "<<endl;
            }
            else if(a<x && b==y)
            {
                x--;
                y=y;
                //cout<<"6 "<<endl;
            }


            if(a==x && b==y)
            {
                cout<<"white"<<endl;
                return 0;
            }





        }
        else
        {//cout<<"i is  "<<i<<endl;
            if(a<r && b<s)
            {
                r--;
                s--;
                //cout<<"a "<<endl;
            }
            else if(a==r && b<s)
            {
                r=r;
                s--;
                //cout<<"b "<<endl;
            }
            else if(a<r && b==s)
            {
                r--;
                s=s;
                //cout<<"c "<<endl;
            }



            if(a==r && b==s)
            {
                cout<<"black"<<endl;
                return 0;
            }
        }


    }





}



