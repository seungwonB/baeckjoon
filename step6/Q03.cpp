#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;


int main() {
	int cnt = 0;
	int array[1000];
	int num;
	cin >> num;
	
	if (num < 100) {
		for(int i = 1; i <= num; i++) {
			cnt++;
		}
	} else {
		cnt = 99;
		for(int i = 100; i <= num; i++){
			int hundred = i / 100;
			int ten = (i % 100) / 10;
			int one = (i % 100) % 10;
			
			if (hundred - ten == ten - one)
				cnt++;	
		}
	}
	cout << cnt;

}
