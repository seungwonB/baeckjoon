#include <iostream>

using namespace std;

int main() {
	int arr[100] = { 0 };
	int max;
	for(int i=1;i<=30;i++) {
		arr[i] = i + (i/10) + (i%10);
	}
	max = arr[0];
	for(int i=1;i<=30;i++){
		if(max < arr[i])
			max = arr[i];
	}
	cout << max;
} 
