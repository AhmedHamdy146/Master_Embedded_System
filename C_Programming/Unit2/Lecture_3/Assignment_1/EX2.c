/*
 * 	EX2.c
 *	Write C Program to Print a Integer Entered by a User
 *  Created on: Feb 11, 2023
 *      Author: Ahmed Hamdy
 */

#include<stdio.h>
void main() {

    int number;
    printf("Enter a integer: ");
    fflush(stdin); fflush(stdout);
    scanf("%d" , &number);
    printf("You entered: %d" , number);
    
}