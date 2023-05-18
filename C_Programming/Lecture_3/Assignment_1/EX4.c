/*
 * 	EX4.c
 *	Write C Program to Multiply two Floating Point Numbers
 *  Created on: Feb 11, 2023
 *      Author: Ahmed Hamdy
 */

#include<stdio.h>
void main() {

	float NumberOne , NumberTwo;
    printf("Enter two numbers: ");
    fflush(stdin) ; fflush(stdout);
    scanf("%f%f", &NumberOne, &NumberTwo);
    printf("Product: %f", NumberOne * NumberTwo);
}

