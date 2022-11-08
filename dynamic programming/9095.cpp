#include <iostream>
using namespace std;

void plus123(int dp[]){
	for(int j = 4; j < 12; j++)
		dp[j] = dp[j-1] + dp[j-2] + dp[j-3];
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int T, n;
	cin >> T;
	int dp[12];
	
	dp[0] = 0;
	dp[1] = 1;
	dp[2] = 2;
	dp[3] = 4;
	plus123(dp);

	for(int i = 0; i < T; i++) {
		cin >> n;
		cout << dp[n] << "\n";
	}
	return 0;
}

