#include <bits/stdc++.h>
using namespace std;

void test_cases() {
	int x;
	cin >> x;
	int n = 3;
	vector<int> a(n);
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	vector<bool> visited(n, false);
	while (true) {
		visited[x-1] = true;
		if (a[x-1] == 0) {
			break;
		}
		x = a[x-1];
	}
	bool checker = true;
	for (int i = 0; i < n; i++) {
		checker &= (visited[i]);
	}
	cout << (checker ? "YES" : "NO") << "\n";
}

int main() {
	
	int T;
	cin >> T;
	while (T--) {
		test_cases();
	}
}
