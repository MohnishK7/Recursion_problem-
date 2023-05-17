#include <bits/stdc++.h>
using namespace std;

void name(int i , int n) {
	if (i > n) return;
	cout << "Hello" << endl;
	name(i + 1, n);
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
	name(1, n);
	return 0;
}
