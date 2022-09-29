#include <stdio.h>
int main(void) {
	int n=0;
	int j;
	scanf("%d", &n);
	j = n;
	for (int i = 1; i <= n; i++) {
		for (int i = 0; i < n - j; i++) {
			printf(" ");
		}
		for (j; j > 0; j--) {
			printf("*");
		}
		printf("\n");
		j = n - i;
	}
	return 0;
}
