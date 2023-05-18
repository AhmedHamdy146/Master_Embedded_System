    /*
    * 	EX4.c
    *	Write C Program to check whether a number is positive or negative
    *  Created on: Feb 11, 2023
    *      Author: Ahmed Hamdy
    */

    #include<stdio.h>
    void main() {

        float Number;
        printf("Enter a number: ");
        fflush(stdin); fflush(stdout);
        scanf("%f", &Number);
        if(Number == 0) printf("You entered zero.");
        else if(Number > 0) printf("%.2f is positive.", Number);
        else printf("%.2f is Negative.", Number);
        
    }

