<<<<<<< HEAD
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <cctype>
using namespace std;
//1152번 단어의 개수 브론즈2 
//영어 대소문자와 공백으로 이루어진 문자열이 주어진다. 이 문자열에는 몇 개의 단어가 있을까? 
//이를 구하는 프로그램을 작성하시오. 단, 한 단어가 여러 번 등장하면 등장한 횟수만큼 모두 세어야 한다. 

int main() {
	string str; // 입력하는 문자 
	int cnt = 0; // 공백 갯수 체크 
	getline(cin, str);

	for(int i=0;i<str.length();i++){ 
		if(isspace(str[i]) != 0)  
			cnt++; //공백이 있는 경우 증가 
	}
	// 처음, 마지막 공백은 없는 셈 
	if(isspace(str[0]) != 0 ){
		cnt--;
	}
	if(isspace(str[str.length()-1]) != 0 ){
		cnt--;
	}
	cout << cnt + 1;
	
}

=======
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <algorithm>
using namespace std;
//알파벳 대소문자로 된 단어가 주어지면, 이 단어에서 가장 많이 사용된 알파벳이 무엇인지 알아내는 프로그램을 작성하시오. 
//단, 대문자와 소문자를 구분하지 않는다.

int main() {
	string str; // 입력 문자열
	cin >> str;
	string alphabet = "ABCDEFGHIJKLMNOPQRSTUVWXYZ"; // 빈도수 확인 위한 문자열 
	int arr[26] = { 0 }; // 빈도수 체크 
	int max; // 가장 빈도수가 큰 값 
	char ch; // 출력할 문자
	
	// 빈도수 검 
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
			max = arr[i];사 
			ch = alphabet[i];
		} 
//		cout << arr[i] << " ";
	}
	cout << ch;
}
>>>>>>> 6335ff5dc4efcd7cee9309253be85561925b16b6
