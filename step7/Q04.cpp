#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;
// 문자열 반복 
int main() {
	int num;
	int cnt;
	string str;
<<<<<<< HEAD
	cin >> num;
	
	for(int i=0;i<num;i++) {
		cin >> cnt >> str;
		
=======
	cin >> num; // 테스트 케이스 
	
	for(int i=0;i<num;i++) {
		cin >> cnt >> str; // 반복할 횟수, 문자열  

>>>>>>> 0d81961b4a455d421ebe5092d60959c1767c8608
		for(int j=0;j<str.length();j++) {
			for(int k=0;k<cnt;k++){
				cout << str[j];
			}
		}
		cout << "\n";
<<<<<<< HEAD
		
=======
>>>>>>> 0d81961b4a455d421ebe5092d60959c1767c8608
	}
} 
