#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <cctype>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

//2292번, 벌집, 브론즈2 
int main(){
	int num; // 입력 숫자
	cin >> num;
	int i = 0;
	// 계속 더하며 수열. ㅇ... 
	for(int sum=2;sum<=num;i++) { 
		sum += 6*i; 
	}
	if (num == 1) cout << num;
	else
		cout << i;
}
