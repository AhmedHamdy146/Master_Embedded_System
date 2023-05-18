/*
 * 	EX2.c
 *	Write C Program to check Vowel or consonant
 *  Created on: Feb 11, 2023
 *      Author: Ahmed Hamdy
 */

#include<stdio.h>
void main() {

	char s;
    printf("Enter an alphabet: ");
    fflush(stdin); fflush(stdout);
    scanf("%c", &s);
    switch (s)
    {
    case 'a':
    case 'A': {
        printf("%c is a vowel.", s);
        break;
    }
    case 'e':
    case 'E': {
        printf("%c is a vowel.", s);
        break;
    }
    case 'i':
    case 'I': {
        printf("%c is a vowel.", s);
        break;
    }
    case 'o':
    case 'O': {
        printf("%c is a vowel.", s);
        break;
    }
    case 'u':
    case 'U': {
        printf("%c is a vowel.", s);
        break;
    }
    
    default:
        printf("%c is a consonant", s);
        break;
    }

}

