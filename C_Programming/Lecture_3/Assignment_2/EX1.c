/*
 * 	EX1.c
 *	Write C Program to check whether a Number is Even or Odd.
 *  Created on: Feb 11, 2023
 *      Author: Ahmed Hamdy
 */

#include<stdio.h>
void main() {

	int Number;
    printf("Enter an integer you want to check: ");
    fflush(stdin); fflush(stdout);
    scanf("%d", &Number);
    if(Number % 2) printf("%d is Odd", Number);
    else printf("%d is Even", Number);

}

