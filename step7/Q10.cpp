#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <cctype>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

//1316번, 그룹 단어 체커, 실버5
int main(){
	int num; // 반복할 횟수
	int cnt = 0;
	cin >> num;
	string str; // 입력할 문자열
	
	for(int i=0;i<num;i++) { // 입력한 횟수만큼 반복 
		int arr[26] = { 0, }; // 알파벳의 갯수만큼의 배열 생성 
		bool check = false; // 그룹 단어인지 아닌지 확인 
		cin >> str; // 문자열 입력 
		
		for(int j=0;j<str.length();j++){ // 입력한 문자열 하나하나 반복 
			arr[(int)str[j]-97]++; // 중복성 체크를 위함 
			// 2개 이상 나왔는지 and 2번재 index부터 and 바로 전 단어와 비교 
			if(arr[(int)str[j]-97] > 1 && j >= 1 && str[j] != str[j-1]){
				check = true; // 그룹단어면 true 
				break;
			}
		}		
		if(!check) cnt++;
	}
	cout << cnt;
}
