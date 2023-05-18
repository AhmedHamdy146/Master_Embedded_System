/*
* 	EX5.c
*	Write a c program to search an element in an array
*   Created on: Feb 13, 2023
*      Author: Ahmed Hamdy
*/

#include<stdio.h>
void main() {

    int n , x ;
    printf("Enter no of elements : ");
    fflush(stdin); fflush(stdout);
    scanf("%d" , &n);
    int a[n];
    for(int i = 0; i < n ; i++) {
        scanf("%d" , &a[i]);
    }
    printf("Enter the element to be searched : ");
    fflush(stdin); fflush(stdout);
    scanf("%d", &x);
    for(int i = 0; i < n; i++) {
        if(a[i] == x) {
            printf("Number found at the location = %d" , i + 1);
            break;
        }
    }
}