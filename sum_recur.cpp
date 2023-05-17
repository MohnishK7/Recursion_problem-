#include <bits/stdc++.h>
using namespace std;

int sum(int n) {
	if (n == 0) return 0; // n==1 base case for fact
	return n + sum(n - 1); // for fact use mult operator
}

int main() {

#ifndef ONLINE_JUDGE
	//input.txt
	freopen("input.txt", "r", stdin);
	//output.txt
	freopen("output.txt", "w", stdout);
#endif

	int n;
	cin >> n;
	cout << sum(n);
}
