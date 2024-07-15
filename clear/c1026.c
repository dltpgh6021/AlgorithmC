#include <stdio.h>
#include <stdlib.h>

void Swap(int *a, int *b) {
	int t = *a;
	*a = *b;
	*b = t;
}

void SortUp(int* p, int n) {
	for(int i = 0; i < n - 1; i++) {
		for(int j = i + 1; j < n; j++) {
			if(p[i] > p[j]) Swap(p + i, p + j);
		}
	}
}

void SortDown(int* p, int n) {
	for(int i = 0; i < n - 1; i++) {
		for(int j = i + 1; j < n; j++) {
			if(p[i] < p[j]) Swap(p + i, p + j);
		}
	}
}

int main(void) {
	int n;
	scanf("%d", &n);
	
	int* a = calloc(n, sizeof(int));
	int* b = calloc(n, sizeof(int));
	
	for(int i = 0; i < n; i++) scanf("%d", a + i);
	for(int i = 0; i < n; i++) scanf("%d", b + i);
	
	SortUp(a, n); SortDown(b, n);
	
	int sum = 0;
	for(int i = 0; i < n; i++) {sum += a[i] * b[i];}
	
	printf("%d", sum);
	
	return 0;
}