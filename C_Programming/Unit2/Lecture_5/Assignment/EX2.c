/*
 * EX2.c
 *	c program to calc factorial using recursion
 *  Created on: Mar 3, 2023
 *      Author: Ahmed Hamdy
 */
#include<stdio.h>
long long int fact(long long int n) {
    if(n == 0) return 1;
    return n * fact(n - 1);
}
int main() {
    long long int n;
    printf("Enter an positive integer: ");
    fflush(stdin); fflush(stdout);
    scanf("%lld" ,&n);
    printf("Factorial of %lld = " , fact(n));

    return 0;
}



