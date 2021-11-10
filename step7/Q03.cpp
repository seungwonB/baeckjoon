#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

int main() {
	string inp;
	string alphabet = "abcdefghijklmnopqrstuvwxyz";
	cin >> inp;
	
	for(int i=0;i<alphabet.length();i++) {
		cout << (int)inp.find(alphabet[i]) << " ";
	}
} 
