#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

int func(int n) {
	int result = n;
	while(true) {
		if(n == 0) break;
		result = result + n % 10;
		n = n / 10;
	}
	return result;
}

bool array[10001];

int main() {
	for(int i=1;i<=10000;i++){
		int num = func(i);
		if (num <= 10001) {
			array[num] = true;
		}
	}
	
	for(int i=1;i<=10000;i++) {
		if (!array[i])
			cout << i << "\n";
	}
} 
