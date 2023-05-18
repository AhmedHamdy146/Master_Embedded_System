/*
 * 	EX7.c
 *	Write Source Code to Swap Two Numbers without temp variable.
 *  Created on: Feb 11, 2023
 *      Author: Ahmed Hamdy
 */

#include<stdio.h>
void main() {

	float a , b , Temp;
    printf("Enter value of a: ");
    fflush(stdin); fflush(stdout);
    scanf("%f", &a);
    printf("Enter value of b: ");
    fflush(stdin); fflush(stdout);
    scanf("%f", &b);
    a = a + b;
    b = a - b;
    a = a - b;
    printf("After swapping, value of a = %0f\n", a);
    printf("After swapping, value of b = %0f", b);
    
}

