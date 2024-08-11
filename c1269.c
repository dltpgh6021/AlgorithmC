#include <stdio.h>
#include <stdlib.h>

int comp(const void* a, const void* b) {
	const int* p = (const int*) a;
	const int* q = (const int*) b;
	
	if(*p > *q) return 1;
	else return -1;
}

int main(void) {
	int a, b, ans = 0;
	scanf("%d %d", &a, &b);
	
	int *arr1 = calloc(a, sizeof(int));
	int *arr2 = calloc(b, sizeof(int));
	
	for(int i = 0; i < a; i++) scanf("%d", &arr1[i]);
	for(int i = 0; i < b; i++) scanf("%d", &arr2[i]);
	qsort(arr1, a, sizeof(int), comp);
	qsort(arr2, b, sizeof(int), comp);
	
	int i = 0, j = 0;
	while(i < a && j < b) {
		if(arr1[i] == arr2[j]) {
			i++;j++;
		}
		else if(arr1[i] > arr2[j]) {
			ans++;
			j++;
		}
		else if(arr1[i] < arr2[j]) {
			ans++;
			i++;
		}
	}
	if(i == a) ans += b - j;
	else if (j == b) ans += a - i;
	
	printf("%d \n", ans);
	
	free(arr1);
	free(arr2);
	
	return 0;
}