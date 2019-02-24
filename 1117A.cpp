#include <bits/stdc++.h>
using namespace std;

typedef vector<int>  vi;
typedef set<char> setchar;
typedef set<int> sett;
typedef long long ll;
#define vec(a)  a.begin(),a.end()
#define pb     push_back
void init()
{
    ios_base::sync_with_stdio(NULL);
    cin.tie(NULL);
    cout.tie(NULL);
}

int main()
{
    init();
    int longestLength = 0;
int longestStart = 0;
int longestEnd = 0;

for (int start = 0; start < A.length; start++) {
	Dict charCounts = new Dict();
	charCounts[A[start]] = 1;
	int numOdds = 1;
	for (int end = start+1; end < A.length; end++) {
		int c = A[end];

		// update character count for c
		if (!charCounts.has(c))
			charCounts[c] = 0;
		charCounts[c] += 1;

		// update number of odd-count characters
		if (charCounts[c] % 2 == 0)
			numOdds -= 1;
		else
			numOdds += 1;

		// check segment validity, and update best segment
		if (numOdds <= 1 && end-start > longestLength) {
			longestLength = end-start;
			longestStart = start;
			longestEnd = end;
		}
	}
}
    return 0;

}


