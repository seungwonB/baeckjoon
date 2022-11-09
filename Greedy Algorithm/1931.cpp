#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


void inputMeetings(int N, int start, int end, vector<pair<int, int>> &v){
	for (int i = 0; i < N; i++) {
		cin >> start >> end;
		v.push_back(make_pair(end, start));
	}	
}

int maxMeeting(int N, vector<pair<int, int>> v){
	int temp = v[0].first;
	int sum = 1;
	
	for(int i = 1; i < N; i++) {
		if (temp <= v[i].second) {
			sum++;
			temp = v[i].first;
		}
	}	
	return sum;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int N, start, end;
	cin >> N;
	vector<pair<int, int>> v;

	inputMeetings(N, start, end, v);
	sort(v.begin(), v.end());

	cout << maxMeeting(N, v);

	return 0;
}

