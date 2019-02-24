#include <bits/stdc++.h>

using namespace std;

int main() {
  int n;
  cin >> n;
  vector<int> p(n), deg(n);
  for (int i = 1; i < n; i++) {
    cin >> p[i];
    p[i]--;
    deg[p[i]]++;
    cout<<"input : "<<p[i]<<"  "<<deg[p[i]]<<endl;
  }
  vector<int> sons_leaves(n);
  for (int i = 0; i < n; i++) {
  cout<<"2nd loop  : "<<deg[i]<<endl;
    if (deg[i] == 0) {
      sons_leaves[p[i]]++;
      cout<<"2nd loop son_leaves  : "<<p[i]<<"   "<<sons_leaves[p[i]]<<endl;
    }
  }
  for (int i = 0; i < n; i++) {
    if (deg[i] > 0 && sons_leaves[i] < 3) {
      puts("No");
      return 0;
    }
  }
  puts("Yes");
  return 0;
}
