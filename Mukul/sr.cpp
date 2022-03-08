#include <bits/stdc++.h>

#define all(x) (x).begin(), (x).end()
#define itn int
#define make_unique(x) sort((x).begin(), (x).end()); (x).erase(unique((x).begin(), (x).end()), (x).end())

using namespace std;

inline int nxt() {
	int x;
	scanf("%d", &x);
	return x;
}

int main() {
	long long a = 1;
	int n = nxt();
	for (int i = 2; i <= n; ++i) {
		a = lcm(a, i);
	}
	cout << a + 1 << "\n";

	return 0;
}
