#include <bits/stdc++.h>
using namespace std;


void numbers(int i, int n) {
	if (i < 1)return;
	cout << i << endl;
	numbers(i - 1, n);

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
	numbers(n, n);

}
