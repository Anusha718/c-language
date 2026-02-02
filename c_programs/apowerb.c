#include<stdio.h>

void apowerb() {

	int a, b, count = 1, result = 1;
	printf("enter a and b values for apowerb");
	scanf_s("%d %d", &a, &b);
	while (count <= b) {
		result = result * a;
		count++;
		printf("in loop result %d count %d\n", result, count);

	}

	printf("Final result %d power %d is %d\n", a, b, result);

}