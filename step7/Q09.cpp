#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <cctype>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;
//2941��, ũ�ξ�Ƽ�� ���ĺ�, �ǹ�5
//����O 
int main() {
	string str; // �Է� ���ڿ� 
	cin >> str;
	int idx; 
	vector<string> croatian = {"c=", "c-", "dz=", "d-", "lj", "nj", "s=", "z="};
	
	for(int i=0;i<croatian.size();i++) {
		while(1) {
			idx = str.find(croatian[i]); // �Է� ���ڿ����� �߰��� ũ�ξ�Ƽ�� index 
			if (idx == string::npos) // ������ ���� ���� 
				break;
			str.replace(idx, croatian[i].length(), "#"); // ũ�ξ�Ƽ�� index���� �� ���� ���̸�ŭ #���� ��ȯ 
		}
	}
	cout << str.length();

}

