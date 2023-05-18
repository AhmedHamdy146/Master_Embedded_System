/*
 * 	EX5.c
 *	Write C Program to Find ASCII Value of a Character
 *  Created on: Feb 11, 2023
 *      Author: Ahmed Hamdy
 */

#include<stdio.h>
void main() {

	char s;
    printf("Enter a character: ");
    fflush(stdin); fflush(stdout);
    scanf("%c", &s);
    printf("ASCII value of %c = %d", s , s);
    
}

