#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <cctype>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

//1712��, ���ͺб���, �����4 
int main(){
	// �� : A + Bx < Cx 
	int a, b, c; // �������, �� �� �����, �Ǹ� ��� 
	cin >> a >> b >> c;
	long long x; 
	
	if ( b >= c ) //  ����� �Ǹź�� ���Ŵ� ������ ����x 
		x = -1;
	else {
		x = a/(c-b);
		x++;	
	}
	
	cout << x;
}
