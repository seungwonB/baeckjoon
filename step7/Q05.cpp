#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;
//알파벳 대소문자로 된 단어가 주어지면, 이 단어에서 가장 많이 사용된 알파벳이 무엇인지 알아내는 프로그램을 작성하시오. 
//단, 대문자와 소문자를 구분하지 않는다.

int main() {
	string str; // 입력 문자열
	cin >> str;
	string alphabet = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int arr[26] = { 0 };
	int max;
	char ch;
		
	for(int i=0;i<str.length();i++) {
		for(int j=0;j<alphabet.length();j++){
			if (toupper(str[i]) == alphabet[j]) {
				arr[j]++;
			}
		}
	}
	max = arr[0];
	ch = 'A';
	for(int i=0;i<26;i++){
		if (max == arr[i]) {
			if (i == 0 ){
				ch = 'A';
			}else{
				ch = '?';	
			}
		}
		if (max < arr[i]){
			max = arr[i];
			ch = alphabet[i];
		} 
//		cout << arr[i] << " ";
	}
	cout << ch;
}
