#include <stdio.h>

int main() {
	int n1, n2, a[50][50];
	int b[50] = { 0 };
	int c[50] = { 0 };
	int count1 = 0, count2 = 0;
	char gua;
	scanf("%d %d", &n1, &n2);
	for (int i = 0; i < n1; i++) {
		for (int j = 0; j < n2; j++) {
			scanf(" %c", &gua);
			if (gua == '.') a[i][j] = 0;
			else if (gua == 'X') a[i][j] = 1;
		}
	}
	for (int i = 0; i < n1; i++) {
		for (int j = 0; j < n2; j++) {
			b[i] += a[i][j];
			if (b[i] > 1) b[i] = 1;
		}
	}

	for (int j = 0; j < n2; j++) {
		for (int i = 0; i < n1; i++) {
			c[j] += a[i][j];
			if (c[j] > 1) c[j] = 1;
		}
	}
	for (int i = 0; i < n1; i++) {
		if (b[i] == 0) count1 += 1;
	}
	for (int i = 0; i < n2; i++) {
		if (c[i] == 0) count2 += 1;
	}
	if (count1 > count2) printf("%d\n", count1);
	else printf("%d\n", count2);

	return 0;
}
