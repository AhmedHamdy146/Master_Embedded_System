    /*
    * 	EX6.c
    *	Write C Program to calculate sum of natural numbers
    *  Created on: Feb 11, 2023
    *      Author: Ahmed Hamdy
    */

    #include<stdio.h>
    void main() {

        int N;
        printf("Enter an integer: ");
        fflush(stdin); fflush(stdout);
        scanf("%d", &N);
        N = N * (N + 1) / 2;
        printf("Sum = %d", N);
        
    }

