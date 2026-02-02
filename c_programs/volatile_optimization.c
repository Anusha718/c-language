#include <stdio.h>


void optimize() {
	int a = 10;
	printf("a value internally optimized %d %d %d\n", ++a,++a,++a);
}

void notoptimize_volatile() {
	volatile int a = 10;
	printf("a value internally optimized %d %d %d\n", ++a, ++a, ++a);
}