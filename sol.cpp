#include <bits/stdc++.h>

using namespace std;

void decode() {
	double q, p, d = 0;
	cin >> q >> p;
	double n1 = q * p;
	if(q > 1000) {
		d = n1 * 0.10;
	}
	cout << fixed << setprecision(6) << n1 - d << "\n";
}
int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int t;
	cin >> t;
	while(t--) {
		decode();
	}
	return 0;
}
