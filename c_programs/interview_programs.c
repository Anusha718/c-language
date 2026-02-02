#include<stdio.h>

void sum_of_digits() {
	int n = 258;
	int sum = 0, a;

	while (n>0) {
		a = n % 10;
		sum = sum + a;
		n = n / 10;
	}

	printf(" sum is %d\n", sum);
}

void reverse_integer() {
	int n = 258;
	int res = 0, a;

	while (n > 0) {
		a = n % 10;
		res = res*10 + a;
		n = n / 10;
	}

	printf("reversed number is %d\n", res);
}

void power_of_other() {

	int n, i=0, res=1, a;
	printf("enter values to find power of other");
	scanf_s("%d %d", &n, &a);

	while (res < n) {
		res = res * a;
		i++;
	}
	if (res == n) 
		printf(" %d is %d power of %d\n", res, a, i);
	else
		printf(" %d is not %d power %d\n", n, a,res);
}

void change_alphabet_case() {
	char ch;
	printf("eter character to change alphabet");
	ch = getchar();
	printf("%c %d\n", ch, ch);
	if ((ch >= 65) && (ch <= 90)) {
		//ch = ch + 32;
		ch = ch ^ 32;
		printf("%c\n", ch);
	}else if ((ch >= 97) && (ch <= 122)) {
		//ch = ch - 32;
		ch = ch ^ 32;
		printf("%c\n", ch);

	}
	else {
		printf("not alphabet\n");
	}
}

void isprime(void) {

	int n , i,j,isprime=0;

	printf("enter limit to print prime numbers\n");
	scanf_s("%d", &n);

	for (i = 2; i <= n; i++) {   // we are printing prime numbers from 2 to n
		isprime = 1;
		for (j = 2; j <= i / 2; j++) {    //this is the logic to check prime
			if (i % j == 0) {
				isprime = 0;
				break;
			}
		}
		if (isprime)
			printf("%d  ", i);
	}
	
}

int factorial(int n) {

	int i = 1,fact=1;
	for (i = 1; i <= n; i++) {
		fact = fact * i;
	}
	return fact;
}


int recursive_fibonacci(int n)
{
	if (n == 0)
		return 0;
	if (n == 1)
		return 1;
	return (recursive_fibonacci(n - 1) + recursive_fibonacci(n - 2));
}