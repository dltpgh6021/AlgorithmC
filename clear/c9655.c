#include <stdio.h>

int main(void) {
	int n;
	scanf("%d", &n);
	
	if(n % 2 == 1) printf("SK\n");
	else if(n % 2 == 0) printf("CY\n");
	return 0;
}