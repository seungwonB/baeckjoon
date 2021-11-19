#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <cctype>
#include <string>
#include <algorithm>
using namespace std;
//5622번, 다이얼, 브론즈2
//숫자 1은 2초 
 
int main() {
	string str; // 입력 문자열 
	cin >> str; 
	int num;
	int sum = 0;
	
	for(int i=0;i<str.length();i++){
		switch(str[i]){
			case 'A':
			case 'B':
			case 'C':
				num = 3;
				break;
			case 'D':
			case 'E':
			case 'F':
				num = 4;
				break;
			case 'G':
			case 'H':
			case 'I':
				num = 5;
				break;
			case 'J':
			case 'K':
			case 'L':
				num = 6;
				break;
			case 'M':
			case 'N':
			case 'O':
				num = 7;
				break;
			case 'P':
			case 'Q':
			case 'R':
			case 'S':
				num = 8;
				break;
			case 'T':
			case 'U':
			case 'V':
				num = 9;
				break;
			case 'W':
			case 'X':
			case 'Y':
			case 'Z':
				num = 10;
				break;
			default:
				break;
		}
		sum += num;
	}
	cout << sum;
}

