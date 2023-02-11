    /*
    * 	EX5.c
    *	Write C Program to check whether a character is alphabet or not
    *  Created on: Feb 11, 2023
    *      Author: Ahmed Hamdy
    */

    #include<stdio.h>
    void main() {

        char s;
        printf("Enter a character: ");
        fflush(stdin); fflush(stdout);
        scanf("%c", &s);
        if((s >= 'a' && s <= 'z') || (s >= 'A' && s <= 'Z')) {
            printf("%c is an alphabet", s);
        } else {
            printf("%c is not an alphabet", s);
        }
        
    }

