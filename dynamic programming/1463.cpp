#include <cstdio>
#include <algorithm>
#include <iostream>
using namespace std;

void dp(int T, int arr[]){
    arr[1] = 0;

	for(int i = 2; i <= T; i++) {
		arr[i] = arr[i-1] + 1;
		
		if (i % 2 == 0) {
			arr[i] = min(arr[i], arr[i/2] + 1);
		}
		if (i % 3 == 0) {
			arr[i] = min(arr[i], arr[i/3] + 1);
		}
	}
}

int main() {
	int T;	
	int arr[1000001];	

    scanf("%d", &T);
    dp(T, arr);
	printf("%d", arr[T]);
	return 0;
}

