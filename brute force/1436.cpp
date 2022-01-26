#include <cstdio>
#include <string>

using namespace std;

int main() {
	int n, i = 0;
	scanf("%d", &n);

	while (1) {
		if (n == 0) break;
		if (to_string(i).find("666") != string::npos) {
			n--;
			if (n == 0)
				printf("%d", i);
		}
		i++;
	}
}
