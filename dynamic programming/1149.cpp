#include <cstdio>
#include <iostream>

using namespace std;

int main() {
	int test_case;
	scanf_s("%d", &test_case);
	int RGB[3];
	int house[1001][3];
	house[0][0] = house[0][1] = house[0][2] = 0;

	for (int i = 1; i <= test_case; i++) {
		scanf_s("%d %d %d", &RGB[0], &RGB[1], &RGB[2]);
		house[i][0] = min(house[i - 1][1], house[i - 1][2]) + RGB[0];
		house[i][1] = min(house[i - 1][0], house[i - 1][2]) + RGB[1];
		house[i][2] = min(house[i - 1][0], house[i - 1][1]) + RGB[2];
	}
	printf("%d", min(house[test_case][2], min(house[test_case][0], house[test_case][1])));
}
