#include<iostream>
#include<algorithm>
#define MAX 1000000000
using namespace std;

int main()
{
	long long dist[100001];
	long long price[100001];
	long long N, minPrice, sum = 0;
	cin >> N;

	for (int i = 0; i < N-1; i++)
		cin >> dist[i];
	
	for (int i = 0; i < N; i++)
		cin >> price[i];
	
	minPrice = MAX;

	for (int i = 0; i < N; i++) {
		if (price[i] < minPrice)
			minPrice = price[i];
		sum += minPrice * dist[i];
	}

	cout << sum;

}
