#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;
// 문자열 반복 
int main() {
	int num;
	int cnt;
	string str;
	cin >> num; // 테스트 케이스 
	
	for(int i=0;i<num;i++) {
		cin >> cnt >> str; // 반복할 횟수, 문자열  

		for(int j=0;j<str.length();j++) {
			for(int k=0;k<cnt;k++){
				cout << str[j];
			}
		}
		cout << "\n";
	}
} 
