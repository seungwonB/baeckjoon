#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <cctype>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

//1316��, �׷� �ܾ� üĿ, �ǹ�5
int main(){
	int num; // �ݺ��� Ƚ��
	int cnt = 0;
	cin >> num;
	string str; // �Է��� ���ڿ�
	
	for(int i=0;i<num;i++) { // �Է��� Ƚ����ŭ �ݺ� 
		int arr[26] = { 0, }; // ���ĺ��� ������ŭ�� �迭 ���� 
		bool check = false; // �׷� �ܾ����� �ƴ��� Ȯ�� 
		cin >> str; // ���ڿ� �Է� 
		
		for(int j=0;j<str.length();j++){ // �Է��� ���ڿ� �ϳ��ϳ� �ݺ� 
			arr[(int)str[j]-97]++; // �ߺ��� üũ�� ���� 
			// 2�� �̻� ���Դ��� and 2���� index���� and �ٷ� �� �ܾ�� �� 
			if(arr[(int)str[j]-97] > 1 && j >= 1 && str[j] != str[j-1]){
				check = true; // �׷�ܾ�� true 
				break;
			}
		}		
		if(!check) cnt++;
	}
	cout << cnt;
}
