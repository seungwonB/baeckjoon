#include <iostream>

using namespace std;
//"OOXXOXXOOO"와 같은 OX퀴즈의 결과가 있다. O는 문제를 맞은 것이고, X는 문제를 틀린 것이다. 
//문제를 맞은 경우 그 문제의 점수는 그 문제까지 연속된 O의 개수가 된다. 예를 들어, 10번 문제의 점수는 3이 된다.
//"OOXXOXXOOO"의 점수는 1+2+0+0+1+0+0+1+2+3 = 10점이다.
//OX퀴즈의 결과가 주어졌을 때, 점수를 구하는 프로그램을 작성하시오.

int main() {
	int num;
	int sum;
	cin >> num;
	string str[num];
	int j = 0;
	int cnt=0;
	for(int i=0;i<num;i++) {
		cin >> str[i]; 
	}
	for(int i=0;i<num;i++){
		while(str[i][j] != NULL) {
			if (str[i][j] == 'O') {
				cnt++;
				sum += cnt;
			} else if (str[i][j] == 'X'){
				cnt = 0;
			}
			j++;
		}
		cout << sum << '\n';
		sum = 0;
		j = 0;
		cnt = 0;
	}
	
}
