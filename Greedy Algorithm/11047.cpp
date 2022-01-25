#include <cstdio>

int main() {
	int coin, sum, user = 0, cnt = 0;
	scanf("%d %d", &coin, &sum);

	int coins[coin];

	for (int i = 0; i < coin; i++) {
		scanf("%d", &coins[i]);
	}

	int i = coin - 1;

	while (user != sum) {
		if (coins[i] <= sum && (user+coins[i]) <= sum) {
			user += coins[i];
			cnt++;
			continue;
		} else
			i--;
	}

	printf("%d", cnt);
}
