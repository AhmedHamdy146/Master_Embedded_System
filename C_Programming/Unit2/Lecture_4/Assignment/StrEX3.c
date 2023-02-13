/*
* 	StrEX3
*	Write a c program to reverse string
*   Created on: Feb 13, 2023
*      Author: Ahmed Hamdy
*/

#include<stdio.h>
void main() {

    char str[1000];
    printf("Enter the string  : ");
    fflush(stdin); fflush(stdout);
    gets(str);
    int cnt = 0;
    for(int i = 0; str[i] != 0; i++) cnt++;
    printf("Reverse string is : ");
    for(int i = cnt; i >= 0; i--) printf("%c", str[i]);

}
