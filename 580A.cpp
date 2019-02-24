#include<bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)
    {
      cin>>arr[i];

    }
    int c=1,temp=1;
    for(int i=1;i<n;i++)
    {
      if(arr[i-1] <= arr[i])
      {

        c++;
        temp=max(temp,c);

      }
     else
     c=1;

     }
     cout<<temp<<endl;


    return 0;
}
