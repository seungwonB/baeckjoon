#include <iostream>

using namespace std;
//���� N���� �̷���� ���� A�� ���� X�� �־�����. 
//�̶�, A���� X���� ���� ���� ��� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
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
