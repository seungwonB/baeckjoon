#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <algorithm>
using namespace std;
//���ĺ� ��ҹ��ڷ� �� �ܾ �־�����, �� �ܾ�� ���� ���� ���� ���ĺ��� �������� �˾Ƴ��� ���α׷��� �ۼ��Ͻÿ�. 
//��, �빮�ڿ� �ҹ��ڸ� �������� �ʴ´�.

int main() {
	string str; // �Է� ���ڿ�
	cin >> str;
	string alphabet = "ABCDEFGHIJKLMNOPQRSTUVWXYZ"; // �󵵼� Ȯ�� ���� ���ڿ� 
	int arr[26] = { 0 }; // �󵵼� üũ 
	int max; // ���� �󵵼��� ū �� 
	char ch; // ����� ����
	
	// �󵵼� �� 
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
			max = arr[i];�� 
			ch = alphabet[i];
		} 
//		cout << arr[i] << " ";
	}
	cout << ch;
}
