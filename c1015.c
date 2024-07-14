		#include <stdio.h>

		int main() {
			int n;
			scanf("%d", &n);

			int in[50];
			int out[50];

			for(int i = 0; i < n; i++) scanf("%d", &in[i]);

			int count = 0;
			for(int i = 1; i <= 1000; i++) {
				for(int j = 0; j < n; j++) {
					if(in[j] == i) {out[j] = count++;}
				}
			}

			for(int i = 0; i < n; i++) printf("%d ", out[i]);

			return 0;
		}