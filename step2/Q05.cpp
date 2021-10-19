#include <iostream>

using namespace std;

int main() {
	int h, m;
	int minute = 0;
	int m2 = 0;
	cin >> h >> m;
	
	
	if (m < 45) {
		minute = 45 - m;
		m = 60 - minute;
		if (h == 0) {
			h = 23;
		} else {
			h -= 1;
		}
	} else {
		m = m - 45;
	}
	cout << h << " " << m;
}
