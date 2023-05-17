#include <bits/stdc++.h>
using namespace std;


void numbers(int i, int n) {
	if (i > n)return;
	numbers(i + 1, n); // swap line 7 and 8 --- backtracking
	cout << i << endl;


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
	numbers(1, n);

}
