#include <iostream>
#include <string>
#include <queue>
#include <algorithm>
using namespace std;

int main() {
	string S,T;
	cin >> S >> T;
	
	while (1) {
		if (S.length() == T.length()) {
			if (S == T)
				cout << 1;
			else
				cout << 0;
			break;
		}
		
		if (T.back() == 'A')
			T.pop_back();
		else{
			T.pop_back();
			reverse(T.begin(), T.end());
		}
	}
	return 0;
}
