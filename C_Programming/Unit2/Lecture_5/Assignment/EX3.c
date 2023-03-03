/*
 * EX3.c
 *	c program to reverse a sentence using recursion
 *  Created on: Mar 3, 2023
 *      Author: Ahmed Hamdy
 */
#include<stdio.h>
#include<string.h>
void reverse(char st[500] , int len) {
    if(len < 0) return;
    printf("%c" , st[len]);
    reverse(st , len - 1); 
}
int main() {
    char st[500];
    printf("Enter a sentence: ");
    fflush(stdin); fflush(stdout);
    gets(st);
    int len = strlen(st);
    reverse(st , len - 1);
}



