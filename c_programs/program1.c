#include <stdio.h>

void optimize();
void swap();
void notoptimize_volatile();
void apowerb();
void printbit();
void printascii_symbol();
void sum_of_digits();
void reverse_integer();
void power_of_other();
void change_alphabet_case();
void bit_set_count();
void printbit_by_function(int ch);
void test_set_clear_complement_bit();
void switch_fun ();
void basic_pointer();
void array_find_min_mx();
void string_ch_found();
void stringcopy();
void strstr_manual();
void strcmp_manual();
void isprime(void);
int factorial(int n);
int recursive_fibonacci(int n);

int main() {
	printf("hello this is Aadhya\n");
/*	swap();
	optimize();
	notoptimize_volatile();
	apowerb(); 
    printbit(); 
	printascii_symbol();
	sum_of_digits();
	reverse_integer();
	power_of_other();
	change_alphabet_case();
	printbit();
	bit_set_count();
	test_set_clear_complement_bit();
	switch_fun();
	basic_pointer();
	array_find_min_mx();
	string_ch_found(); 
	stringcopy(); 
	strstr_manual();
	strcmp_manual();
	isprime();

	// factorial by retruning answer through functions
	int fact;
	fact=factorial(5);
	printf("%d\n", fact);*/


	// fibonacci by recursive
	int n=10,i;
	for (i = 0; i <= n; i++)
		printf("%d  ", recursive_fibonacci(i));   // 0 1 1 2 3 5 8 13....

	return 0;
}