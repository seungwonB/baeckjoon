#include <iostream>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n;
	int dp[1001];
	cin >> n;
	
	dp[1] = 1;
	dp[2] = 2;
	for(int i = 3; i <= n; i++) {
		dp[i] = dp[i-1] + dp[i-2];
		dp[i] %= 10007;
	}
	cout << dp[n];
	return 0;
}
