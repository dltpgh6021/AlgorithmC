#include <stdio.h>

int main(void) {
	int k, n, num;
	scanf("%d", &num);
	k = num;
	n = 0;
	
	while(1) {
		n++;
		
		num = (num % 10) * 10 + (num / 10 + num % 10) % 10;
		
		if(k == num) break;
	}
	printf("%d \n", n);
	
	return 0;
}