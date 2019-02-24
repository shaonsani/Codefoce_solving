
#include<bits/stdc++.h>

using namespace std;

int main()
{

    int y;
    double x;
    vector<int> arr;
    cin>>x;
    y=ceil(x/1);
    arr.push_back(y);
    y=ceil(x/2);
    arr.push_back(y);
    y=ceil(x/3);
    arr.push_back(y);
    y=ceil(x/4);
    arr.push_back(y);
    y=ceil(x/5);
    arr.push_back(y);

    sort(arr.begin(),arr.end());
    cout<<arr[0]<<endl;





    return 0;
}
