#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <cctype>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

//2292��, ����, �����2 
int main(){
	int num; // �Է� ����
	cin >> num;
	int i = 0;
	// ��� ���ϸ� ����. ��... 
	for(int sum=2;sum<=num;i++) { 
		sum += 6*i; 
	}
	if (num == 1) cout << num;
	else
		cout << i;
}
