    /*
    * 	EX7.c
    *	Write C Program to find factorial of a number
    *   Created on: Feb 11, 2023
    *      Author: Ahmed Hamdy
    */

    #include<stdio.h>
    void main() {

        int n;
        printf("Enter an integer: ");
        fflush(stdin); fflush(stdout);
        scanf("%d", &n);
        if(n < 0) printf("Error!!! Factorial of negative number doesn't exist.");
        else {
            int F = 1;
            for(int i = 1; i <= n; ++i) {
                F *= i;
            }
            printf("Factorial = %d", F);
        }
        
    }

