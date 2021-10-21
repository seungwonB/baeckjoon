#include <iostream>

using namespace std;
//정수 N개로 이루어진 수열 A와 정수 X가 주어진다. 
//이때, A에서 X보다 작은 수를 모두 출력하는 프로그램을 작성하시오.
int main() {
	int n, x;
	ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	cin >> n >> x;
	int inp[n];
	for(int i=0; i<n; i++){
		
		cin >> inp[i];
		
		if (inp[i] < x) {
			cout << inp[i] << " ";
		}
	}
	
}
