#include<stdio.h>

void switch_fun() {
	int option;
	printf("enter option\n");
	scanf_s("%d", &option);
	switch(option)
	{
	case 1:
		printf("in case1\n");
		break;
	case 2:
		printf("in case2\n");
		break;
	default:
		printf("in default");
	}
}