/*
 * EX4.c
 *	c program to calc the power of a number using recursion
 *  Created on: Mar 3, 2023
 *      Author: Ahmed Hamdy
 */
#include <stdio.h>
long long int power(long long int base , int n) {
    if(n == 0) return 1;
    return base * power(base , n - 1);
}
int main() {
    int n;
    long long int base;
    printf("Enter base number: ");
    fflush(stdin); fflush(stdout);
    scanf("%lld" , &base);
    printf("Enter power number(positive integer): ");
    fflush(stdin); fflush(stdout);
    scanf("%d" , &n);
    printf("%lld^%d = %lld", base , n , power(base , n));
}




