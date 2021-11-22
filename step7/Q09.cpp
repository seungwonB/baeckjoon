#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <cctype>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;
//2941번, 크로아티아 알파벳, 실버5
//도움O 
int main() {
	string str; // 입력 문자열 
	cin >> str;
	int idx; 
	vector<string> croatian = {"c=", "c-", "dz=", "d-", "lj", "nj", "s=", "z="};
	
	for(int i=0;i<croatian.size();i++) {
		while(1) {
			idx = str.find(croatian[i]); // 입력 문자열에서 발견한 크로아티아 index 
			if (idx == string::npos) // 끝까지 가면 종료 
				break;
			str.replace(idx, croatian[i].length(), "#"); // 크로아티아 index에서 그 문자 길이만큼 #으로 변환 
		}
	}
	cout << str.length();

}

