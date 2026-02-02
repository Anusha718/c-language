#include<stdio.h>
void printbit_by_function(int ch);

void printbit() {

	char ch;
	int bit = 7;
	ch = getchar();
	printf("char %c and ascii %d\n", ch, ch);
	while (bit >= 0) {
		printf("%d", (ch >> bit) & 1);
		bit--;
	}
	printf("\n");

}

void printascii_symbol() {
	int n = 1;
	while (n <= 127) {
		printf("%c   %d\n", n, n);
		n++;
	}
}

void bit_set_count() {
	char ch;
	int bit = 7,count=0;
	getchar();
	printf("eter charactr\n");
	ch = getchar();
	printf("char %c and ascii %d\n", ch, ch);

	while (bit >= 0) {
		if ((ch >> bit) & 1) {
			count++;
		}
		bit--;
	}
	printf("count %d\n", count);
}

void printbit_by_function(int ch) {

	int bit = 7;
	printf("char %d\n", ch);
	while (bit >= 0) {
		printf("%d", (ch >> bit) & 1);
		bit--;
	}
	printf("\n");

}

void test_set_clear_complement_bit() {
	int data,temp;
	int bit;

	printf("eter charactr and bit \n");
	scanf_s("%d %d", &data, &bit);
	printbit_by_function(data);

	printf("testing ch bit position\n");
	if ((data >> bit) & 1)
		printf("bit set\n");
	else
		printf("bit not set\n");
	printbit_by_function(data);

	printf("setting bit position\n");
	temp = (1 << bit) | data;
	printf("char %d after setting \n", temp);
	printbit_by_function(temp);

	printf("clearing bit position\n");
	temp = ~(1 << bit) & data;
	printf("char %d after clearing \n", temp);
	printbit_by_function(temp);

	printf("complementing bit position\n");
	temp = (1 << bit) ^ data;
	printf("char %d after complementing \n", temp);
	printbit_by_function(temp);

}
