#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <cctype>
#include <string>
#include <algorithm>
using namespace std;
//2908�� ��� �����2
//���ڸ� �Ųٷ� �о� ū �� ��� 
 
int main() {
	int num1, num2;
	int res;
	cin >> num1 >> num2; // ���� �Է�
	
	string s1 = to_string(num1); // ���ڸ� ���ڿ��� 
	string s2 = to_string(num2);
	
	reverse(s1.begin(), s1.end()); // ������ 
	reverse(s2.begin(), s2.end());
	 
	num1 = atoi(s1.c_str()); // ���ڿ��� ���ڷ� 
	num2 = atoi(s2.c_str());
	
	res = (num1 > num2) ? num1 : num2; // �� �� �� 
	cout << res;
}

