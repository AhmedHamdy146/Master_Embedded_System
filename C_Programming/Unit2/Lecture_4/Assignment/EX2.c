/*
* 	EX2.c
*	Write a c program take n number form user and calculates the average of those numbers
*   Created on: Feb 13, 2023
*      Author: Ahmed Hamdy
*/

#include<stdio.h>
void main() {

    int n;
    printf("Enter the numbers of date: ");
    fflush(stdin); fflush(stdout); 
    scanf("%d", &n);
    float arr[n] , sum = 0;
    for(int i = 0; i < n; i++) {
        printf("Enter number: ");
        fflush(stdin); fflush(stdout); 
        scanf("%f", &arr[i]);
        sum += arr[i];
    } 
    printf("%.2f", sum / n);
}