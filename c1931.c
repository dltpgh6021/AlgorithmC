#include <stdio.h>
#include <stdlib.h>

typedef struct pair{
	int start;
	int end;
} pair;

pair *p;

int comp(const void* p, const void* q) {
	const pair* a = (pair*) p;
	const pair* b = (pair*) q;
	if(a->start < b->start) return 1;
	else if (a->start > b->start) return -1;
	else {
		if(a->end < b->end) return 1;
		else if (a->end > b->end) return -1;
		else return 0;
	}
}

int Find(int size, int a) {
	int left = 0, right = size - 1;
	int mid;
	
	if(p[0].start < a) return -1;
	
	while(left < right) {
		mid = (left + right) / 2;
		if (p[mid].start <= a) right = mid - 1;
		else if (p[mid].start > a) left = mid + 1;
	}
	return right;
}

int main(void) {
	int n;
	scanf("%d", &n);
	
	p = calloc(n, sizeof(pair));
	
	for(int i = 0; i < n; i++) {
		scanf("%d %d", &p[i].start, &p[i].end);
	}
	qsort(p, n, sizeof(pair), comp);
	
	int* arr = calloc(n, sizeof(int));
	int *max = calloc(n, sizeof(int));
	arr[0] = 1;
	max[0] = 1;
	
	for(int i = 1; i < n; i++) {
		int k = Find(n, p[i].end);
		
		if (k == -1) arr[i] = 1;
		else arr[i] = max[k] + 1;
		
		if(arr[i] > max[i - 1]) max[i] = arr[i];
		else max[i] = max[i - 1];
	}
	
	printf("%d", max[n - 1]);
	
	free(p);
	free(arr);
	free(max);
	return 0;
}