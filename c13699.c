#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int n;
	scanf("%d", &n);
	
	long long int* dp = calloc(36, sizeof(long long int));
	
	dp[0] = 1;
	for(int i = 1; i <= n; i++) {
		dp[i] = 0;
		for(int j = 0; j < n; i++) {
			dp[i] += dp[j] * dp[n - 1 - j];
		}
	}
	
	printf("%lld", dp[n]);
	
	return 0;
}