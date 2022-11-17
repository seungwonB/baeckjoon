#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int N, a;
vector<int >v;

int main() {
	cin >> N;

	for (int i = 0; i < N; i++) {
		cin >> a;
		v.push_back(a);
	}
	reverse(v.begin(), v.end());

	int dp[2000];
	for (int i = 0; i < N; i++)
		dp[i] = 1;

	for (int i = 1; i < N; i++) {
		for (int j = 0; j < i; j++) {
			if (v[j] < v[i]) {
				dp[i] = max(dp[i], dp[j] + 1);
			}
		}
	}
	int maxValue = 0;

	for (int i = 0; i < N; i++) {
		maxValue = max(maxValue, dp[i]);
	}
	cout << N - maxValue << "\n";
}
