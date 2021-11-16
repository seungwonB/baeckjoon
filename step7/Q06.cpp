#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <cctype>
using namespace std;
//1152번 단어의 개수 브론즈2 
//영어 대소문자와 공백으로 이루어진 문자열이 주어진다. 이 문자열에는 몇 개의 단어가 있을까? 
//이를 구하는 프로그램을 작성하시오. 단, 한 단어가 여러 번 등장하면 등장한 횟수만큼 모두 세어야 한다. 

int main() {
	string str; // 입력 문자열 
	int cnt = 0; // 공백 갯수  
	getline(cin, str);

	for(int i=0;i<str.length();i++){
		if(isspace(str[i]) != 0) 
			cnt++;
	}
	// 처음, 마지막 공백 제거 
	if(isspace(str[0]) != 0 ){
		cnt--;
	}
	if(isspace(str[str.length()-1]) != 0 ){
		cnt--;
	}
	cout << cnt + 1;
	
}

