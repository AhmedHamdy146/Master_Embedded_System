/*
* 	StrEX2
*	Write a c program to find the length of string
*   Created on: Feb 13, 2023
*      Author: Ahmed Hamdy
*/

#include<stdio.h>
void main() {

    char str[1000];
    printf("Enter a string: ");
    fflush(stdin); fflush(stdout);
    gets(str);
    int cnt = 0;
    for(int i = 0; str[i] != 0; i++) cnt++;
    printf("Length of string: %d", cnt);
    
}