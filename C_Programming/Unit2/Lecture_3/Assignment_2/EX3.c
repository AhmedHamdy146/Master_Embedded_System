/*
 * 	EX3.c
 *	Write C Program to Find the largest Number Among Three Numbers
 *  Created on: Feb 11, 2023
 *      Author: Ahmed Hamdy
 */

#include<stdio.h>
void main() {

	float NumberOne , NumberTwo, NumberThree;
    printf("Enter three numbers: ");
    fflush(stdin); fflush(stdout);
    scanf("%f%f%f", &NumberOne, &NumberTwo, &NumberThree);
    if(NumberOne >= NumberTwo) {
        if(NumberOne >= NumberThree) {
            printf("Largest number = %.2f", NumberOne);
        } else {
            printf("Largest number = %.2f", NumberThree);
        }
    } else {
        if(NumberTwo >= NumberThree) {
            printf("Largest number = %.2f", NumberTwo);
        } else {
            printf("Largest number = %.2f", NumberThree);
        }
    }

}

