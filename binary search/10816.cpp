#include <cstdio>
#include <algorithm>	

using namespace std;

int numOfCard, numOfFind, lower, upper;

int lower_binary(int* arr, int target) {
	int low = 0;
	int high = numOfCard - 1;
	int mid;

	while (high > low) {
		mid = (high + low) / 2;
		if (arr[mid] >= target)
			high = mid;
		else
			low = mid + 1;
	}

	return high;
}

int uppser_binary(int* arr, int target) {
	int low = 0;
	int high = numOfCard - 1;
	int mid;

	while (high > low) {
		mid = (high + low) / 2;
		if (arr[mid] > target)
			high = mid;
		else
			low = mid + 1;
	}

	return high;
}

int main() {
	scanf("%d", &numOfCard);

	int* cards = new int[numOfCard];
	for (int i = 0; i < numOfCard; i++) {
		scanf("%d", &cards[i]);
	}
	sort(cards, cards + numOfCard);

	scanf("%d", &numOfFind);
	int result[numOfFind] = { 0, };
	for (int i = 0; i < numOfFind; i++) {
		int value;
		scanf("%d", &value);
		lower = lower_binary(cards, value);
		upper = uppser_binary(cards, value);
		if (upper == numOfCard - 1 && cards[numOfCard - 1] == value)
			upper++;
		result[i] = upper - lower;
	}

	for (int i = 0; i < numOfFind; i++) {
		printf("%d ", result[i]);
	}
}
