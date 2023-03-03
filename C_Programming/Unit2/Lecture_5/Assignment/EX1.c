/*
 * EX1.c
 *	prime numbers between two intervals
 *  Created on: Mar 3, 2023
 *      Author: Ahmed Hamdy
 */
#include <stdio.h>
#include <stdbool.h>
bool prime(int n) {
	int i = 2;
	for(; i * i <= n; ++i) {
		if(n % i == 0) return 0;
	}
	return (n != 1 ? 1 : 0);
}
int main() {
	int a , b;
	printf("Enter two numbers(intervals): ");
	fflush(stdin); fflush(stdout);
	scanf("%d%d", &a , &b);
	if(a > b) {
		a = a + b;
		b = a - b;
		a = a - b;
	}
	printf("prime numbers between %d and %d are: ", a , b);
	for(; a <= b; ++a) {
		if(prime(a)) {
			printf("%d ", a);
		}
	}
	return 0;

}


