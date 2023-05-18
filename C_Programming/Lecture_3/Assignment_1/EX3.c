/*
 * 	EX3.c
 *	Write C Program to Add Two Integers
 *  Created on: Feb 11, 2023
 *      Author: Ahmed Hamdy
 */

#include<stdio.h>
void main() {

    int number_one , number_two ;
    printf("Enter two integers: ");
    fflush(stdin); fflush(stdout);
    scanf("%d %d" , &number_one , &number_two);
    printf("Sum: %d", number_one + number_two);
    
}