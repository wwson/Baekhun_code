/*#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
	long len;
	char name[51];
} ARr;

void merge(ARr* data, long q, long p, long r) {
	long i = q, j = p + 1, k = q;
	char* tmp;
	while (i <= q && j <= r) {
		if (data[i].len<data[j].len) strcpy(tmp + (k++), data + (i++));
		else strcpy(tmp + (k++), data + (j++));
	}
	while (i <= q) strcpy(tmp + (k++), data + (i++));
	while (j <= r) strcpy(tmp + (k++), data + (j++));
	for (long a = p; a <= r; a++) strcpy(data + a, tmp + a);
}

void mergeSort(ARr* arr, struct ARr ar2[], long a, long b) {
	if (a < b) {
		long mid = (a + b) / 2;
		mergeSort(arr, ar2, a, mid);
		mergeSort(arr, ar2, mid + 1, b);
		merge(arr, a, mid, b);
	}
}

int main() {
	long n;
	scanf("%ld", &n);
	char roro[51];
	struct ARr* arr;
	arr = (ARr*)malloc(sizeof(ARr));
	for (long i = 0; i < n; i++) {
		scanf("%s", roro);
		arr->len = (long)strlen(roro);
		strcpy(arr->name, roro);
	}
}*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct {
    char string[51];
    int length;
} str;

str sort[20001];

void merge(str* arr, int first, int mid, int last) {
    int i = first;
    int j = mid + 1;
    int k = first;

    while (i <= mid && j <= last) {
        if (arr[i].length < arr[j].length)sort[k++] = arr[i++];
        else if (arr[i].length > arr[j].length) sort[k++] = arr[j++];
        else {
            if (strcmp(arr[i].string, arr[j].string) < 0) sort[k++] = arr[i++];
            else sort[k++] = arr[j++];
        }
    }
    if (i > mid) {
        while (j <= last) sort[k++] = arr[j++];
    }
    else {
        while (i <= mid) sort[k++] = arr[i++];
    }
    for (k = first; k <= last; k++) arr[k] = sort[k];
}

void mergesort(str* arr, int first, int last) {
    int mid;
    if (first < last) {
        mid = (first + last) / 2;
        mergesort(arr, first, mid);
        mergesort(arr, mid + 1, last);
        merge(arr, first, mid, last);
    }
}

int main() {
    int n;
    scanf("%d", &n);
    str *arr;
    arr = (str*)malloc(sizeof(str) * n);

    for (int i = 0; i < n; i++) {
        scanf("%s", arr[i].string);
        arr[i].length = strlen(arr[i].string);
    }

    mergesort(arr, 0, n - 1);

    printf("%s\n", arr[0].string);
    for (int i = 1; i < n; i++) {
        if (strcmp(arr[i - 1].string, arr[i].string) != 0) printf("%s\n", arr[i].string);
    }
    return 0;
}
