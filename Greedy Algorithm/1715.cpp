#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
using namespace std;


int main() {
	int N, a, sum = 0;
	cin >> N;
	priority_queue<int, vector<int>, greater<int>> pq;
	
	for(int i = 0; i < N; i++) {
		cin >> a;
		pq.push(a);
	}
	int temp;
	while (pq.size() != 1) {
		temp = 0;
		sum += pq.top();
		temp += pq.top();
		pq.pop();
		sum += pq.top();
		temp += pq.top();
		pq.pop();
		pq.push(temp);
	}	
	if (N == 1) cout << pq.top();
	else cout << sum;
	
	return 0;
}

