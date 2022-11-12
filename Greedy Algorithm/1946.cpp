#include<iostream>
#include<algorithm>
#include <vector>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int ranking[10000][10000];
	int T, N, a, b;
	cin >> T;

	for (int t = 0; t < T; t++) {
		cin >> N;
		vector<pair <int, int>> v;

		for (int i = 0; i < N; i++) {
			cin >> a >> b;
			v.push_back(make_pair(a, b));
		}

		sort(v.begin(), v.end());

		int cnt = 1;
		int temp = 0;
		for (int i = 1; i < N; i++) {
			if (v[temp].second > v[i].second) {
				temp = i;
				cnt++;
			}
		}
		cout << cnt << "\n"; 
	}
	return 0;
}
