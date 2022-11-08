#include <iostream>
#define max(a, b) ((a)>(b)?(a):(b))

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n, sum = 0;
	int dp[301];

	cin >> n;
	int stairs[n];

	for(int i = 1; i <= n; i++){
		cin >> stairs[i];
	}

	dp[0] = 0;
	dp[1] = stairs[1];
	dp[2] = stairs[1] + stairs[2];
	
	for(int i = 3; i <= n; i++) {
		dp[i] = stairs[i] + max(dp[i-2], dp[i-3] + stairs[i-1]);
	}
	
	cout << dp[n];
	return 0;
}
