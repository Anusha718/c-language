#include<stdio.h>
void array_find_min_mx() {

	int a[5] = { 0 };
	int n, max_pos=0,min_pos=0, min, max,i;
	printf("enter array");
	
	n = sizeof(a) / sizeof(a[0]);
	for (i = 0; i < n; i++)
		scanf_s("%d", &a[i]);

	min = a[0];
	max = a[0];
	for (i = 0; i < n; i++) {
		if (max < a[i]) {
			max = a[i];
			max_pos = i;
		}
		if (min > a[i]) {
			min = a[i];
			min_pos = i;
		}
	}

	printf("max %d and position %d\n", max, max_pos);
	printf("min %d and position %d\n", min, min_pos);

}