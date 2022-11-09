#include <iostream>
#include <algorithm>
using namespace std;


int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int N, temp, sum = 0;
	cin >> N;
	int p[N];
	
	for(int i = 0 ; i < N; i++) {
		cin >> p[i];
	}
		
	sort(p, p+N);
	
	for(int i = 0 ; i < N; i++) {
		for(int j = 0; j <= i; j++) {
			sum += p[j];	
		}
	}

	cout << sum;
	return 0;
}

