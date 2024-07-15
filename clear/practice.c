	#include <stdio.h>

	int main() {
		int t;
		long long n, sum;
		int in;

		scanf("%d", &t);

		for(int i = 0; i < t; i++) {
			sum = 0;
			scanf("%lld", &n);
			for(int j = 0; j < 6; j++) { scanf("%d", &in); sum += in;}

			int days = 1;
			while(1) {
				if(n < sum) break;
				sum *= 4;
				days++;
			}
			printf("%d \n", days);
		}

		return 0;
	}