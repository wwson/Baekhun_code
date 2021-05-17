#include <stdio.h>

int main(void) {
	int a, b, c, sum, a1, count = 1;
	scanf("%d", &a);
	int fin=a;
	for(;;) {
		b = a % 10;
		c = a / 10;
		sum = b + c;
		if(fin != b * 10 + sum%10){
		  a=b*10+sum%10;
		  count++;
		}
		else break;
	}
	printf("%d\n", count);
	return 0;
}
