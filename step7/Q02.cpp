#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

int main() {
	int num;
	cin >> num;
	
	int sum = 0;
	char ch;
	
	for(int i=0;i<num;i++) {
		cin >> ch;
		sum += (ch - '0');
	}
	cout << sum;
} 
