#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <cctype>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

//1712번, 손익분기점, 브론즈4 
int main(){
	// 식 : A + Bx < Cx 
	int a, b, c; // 고정비용, 한 대 생산비, 판매 비용 
	cin >> a >> b >> c;
	long long x; 
	
	if ( b >= c ) //  생산비가 판매비와 같거다 높으면 수익x 
		x = -1;
	else {
		x = a/(c-b);
		x++;	
	}
	
	cout << x;
}
