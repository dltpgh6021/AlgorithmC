#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int n;
	scanf("%d", &n);
	
	long long int* dp = calloc(120, sizeof(long long int));
	dp[1] = dp[2] = dp[3] = 1;
	
	for(int i = 4; i <= n; i++) {
		dp[i] = dp[i - 1] + dp[i - 3];
	}
	
	printf("%lld", dp[n]);
	
	return 0;
}