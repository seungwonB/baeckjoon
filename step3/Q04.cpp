#include <iostream>

using namespace std;

int main() {
	int num;
	int x, y;
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	cin >> num;

	for(int i=0;i<num;i++){
		cin >> x >> y;
		
		cout << x + y << "\n";
		
	}
	
}
