#include<stdio.h>
void swap() {


	int a = 4, b = 5;
	printf("values a=%d,b=%d\n", a, b);
	a = a ^ b;
	b = b ^ a;
	a = a ^ b;
	printf("afte swapping values a=%d,b=%d\n", a, b);

}