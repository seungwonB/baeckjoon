#include <cstdio>
#include <algorithm>

using namespace std;

int num1, num2, value;

int binarySearch(int value, int nums1[]) {
	int low = 0;
	int high = num1 - 1;
	int mid;

	while (low <= high) {
		mid = (low + high) / 2;

		if (nums1[mid] == value)
			return 1;
		else if (nums1[mid] > value)
			high = mid - 1;
		else
			low = mid + 1;
	}
	return 0;
}

int main() {
	scanf("%d", &num1);
	int nums1[num1];

	for (int i = 0; i < num1; i++) {
		scanf("%d", &nums1[i]);
	}
	sort(nums1, nums1 + num1);

	scanf("%d", &num2);

	for (int i = 0; i < num2; i++) {
		scanf("%d", &value);
		printf("%d\n", binarySearch(value, nums1));
	}
}
