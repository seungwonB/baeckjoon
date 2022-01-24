#include <cstdio>	
#include <queue>

using namespace std;

int main() {
	int num, temp;
	queue<int> q;
	scanf("%d", &num);

	for (int i = 1; i <= num; i++) {
		q.push(i);
	}

	while(q.size() > 1) {
		q.pop();
		temp = q.front();
		q.pop();
		q.push(temp);
	}
	printf("%d", q.front());
}
