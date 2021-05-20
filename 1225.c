#include <stdio.h>
#include <string.h>

int main() {
	long long i, n, j, sum = 0;
	char arr1[10001];
	char arr2[10001];
	scanf("%s %s", arr1, arr2);
	for (i = 0; i < strlen(arr1); i++) {
		for (j = 0; j < strlen(arr2); j++) {
			sum += ((arr1[i] - '0') * (arr2[j] - '0'));
		}
	}
	printf("%lld\n", sum);
}
