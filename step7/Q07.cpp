#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <cctype>
#include <string>
#include <algorithm>
using namespace std;
//2908번 상수 브론즈2
//숫자를 거꾸로 읽어 큰 수 출력 
 
int main() {
	int num1, num2;
	int res;
	cin >> num1 >> num2; // 숫자 입력
	
	string s1 = to_string(num1); // 숫자를 문자열로 
	string s2 = to_string(num2);
	
	reverse(s1.begin(), s1.end()); // 뒤집기 
	reverse(s2.begin(), s2.end());
	 
	num1 = atoi(s1.c_str()); // 문자열을 숫자로 
	num2 = atoi(s2.c_str());
	
	res = (num1 > num2) ? num1 : num2; // 두 수 비교 
	cout << res;
}

