#include <bits/stdc++.h>
using namespace std;

void f(int i, int a[], int n) {
	if (i >= n / 2) return;
	swap(a[i], a[n - i - 1]);
	f(i + 1, a, n);
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
	int a[n];
	for (int i = 0; i < n; i++) cin >> a[i];
	f(0, a, n);
	for (int i = 0; i < n; i++) cout << a[i] << " ";
	return 0;
}
