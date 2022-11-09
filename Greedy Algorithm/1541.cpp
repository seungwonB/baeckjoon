#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

int calc(string str, string temp) {
	int answer = 0;
	bool minus = false;

	for(int i = 0; i <= str.length(); i++) {
		if (str[i] == '-' || str[i] == '+' || i == str.length()) {
			if(minus) {
				answer -= stoi(temp);
			} else {
				answer += stoi(temp);
			}
			
			temp = "";
			if (str[i] == '-')
				minus = true;
		} 
		else {
			temp += str[i];
		}
	}
	
	return answer;	
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	string str, temp = "";
	cin >> str;	
	
	cout << calc(str, temp);
	return 0;
}

