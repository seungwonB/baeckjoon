#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <cctype>
using namespace std;
//1152�� �ܾ��� ���� �����2 
//���� ��ҹ��ڿ� �������� �̷���� ���ڿ��� �־�����. �� ���ڿ����� �� ���� �ܾ ������? 
//�̸� ���ϴ� ���α׷��� �ۼ��Ͻÿ�. ��, �� �ܾ ���� �� �����ϸ� ������ Ƚ����ŭ ��� ����� �Ѵ�. 

int main() {
	string str; // �Է� ���ڿ� 
	int cnt = 0; // ���� ����  
	getline(cin, str);

	for(int i=0;i<str.length();i++){
		if(isspace(str[i]) != 0) 
			cnt++;
	}
	// ó��, ������ ���� ���� 
	if(isspace(str[0]) != 0 ){
		cnt--;
	}
	if(isspace(str[str.length()-1]) != 0 ){
		cnt--;
	}
	cout << cnt + 1;
	
}

