#include <bits/stdc++.h>
using namespace std;

int sum(int n) {
	if (n == 0) return 0;
	return n + sum(n - 1);
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
