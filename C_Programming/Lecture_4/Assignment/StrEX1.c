/*
* 	StrEX1
*	Write a c program to find the freq of characters in a string
*   Created on: Feb 13, 2023
*      Author: Ahmed Hamdy
*/

#include<stdio.h>
void main() {

    char str[1000] , x;
    printf("Enter a string: ");
    fflush(stdin); fflush(stdout);
    gets(str);
    printf("Enter a character to find frequency: ");
    fflush(stdin); fflush(stdout);
    scanf("%c", &x);
    int cnt = 0;
    for(int i = 0; i < (int)sizeof(str) / (int)sizeof(str[0]); i++) {
        if(str[i] == x) cnt++;
    }
    printf("Frequency of %c = %d", x , cnt);
    
}