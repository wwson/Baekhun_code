#include <stdio.h>
#include <string.h>

int main() {
	char* arr;
	arr = (int*)malloc(sizeof(char) * 6);
	int len;
	for (int i = 0;; i++) {
		scanf("%s", arr);
		if (strncmp(arr, "0", 1) == 0) break;
		len = strlen(arr);
		if (len == 1) {
			printf("yes\n");
			continue;
		}
		if (len % 2 == 1) {
			for (int j = 0; j < len / 2; j++) {
				if (strncmp(arr + j, arr + (len - 1 - j), 1) != 0) {
					printf("no\n");
					fflush(stdin);
					break;
				}
				if (j == len / 2 - 1 && strncmp(arr + j, arr + (len - 1 - j), 1) == 0) {
					printf("yes\n");
					fflush(stdin);
				}
			}
		}
		else {
			for (int j = 0; j < len / 2; j++) {
				if (strncmp(arr + j, arr + (len - 1 - j), 1) != 0) {
					printf("no\n");
					fflush(stdin);
					break;
				}
				if (j == len / 2 - 1 && strncmp(arr + j, arr + (len - 1 - j), 1) == 0) {
					printf("yes\n");
					fflush(stdin);
				}
			}
		}
	}
}
