#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int key;
	int min;
	int temp;
	int result;
	scanf("%d", &key);
	int* num = malloc(sizeof(int) * key);
	for (int i = 0; i < key; i++) {
		scanf("%d", &num[i]);
	}

	for (int i = 0; i < key-1; i++) {
		min = i;
		for (int j = i + 1; j < key; j++) {
			if (num[j] < num[min]) {
				min = j;
			}
		}
		temp = num[min];
		num[min] = num[i];
		num[i] = temp;
	}
	
	result = num[0] * num[key - 1];

	printf("%d",result);

	return 0;
}
