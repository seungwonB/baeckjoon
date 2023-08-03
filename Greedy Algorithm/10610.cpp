#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

bool isThirty(string num) {
	int res = 0;
	bool flag = false;
	
	for(char c : num) {
		res += c - '0';
		if (c == '0') flag = true;
	}

	// 3의 배수이고 0이 존재해야만 30의 배수이다.	
	return res % 3 == 0 && flag;
}

int main(){
	string N;
	cin >> N;
	
	// 내림차순 정렬 
	sort(N.begin(), N.end(), greater<char>());
	
	if (isThirty(N)) {
		cout << N;	
	} else {
		cout << -1;
	}
	
	return 0;
}
