#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int n;
	scanf("%d", &n);
	
	int* arr = calloc(n + 1, sizeof(int));
	
	arr[0] = 0;
	arr[1] = 1;
	
	for(int i = 2; i <= n; i++) {
		arr[i] = arr[i - 1] + arr[i - 2];
	}
	
	printf("%d \n", arr[n]);
	
	return 0;
}