/*
* 	EX1.c
*	write a c program to find sum of two matrix of order 2 * 2
*   Created on: Feb 13, 2023
*      Author: Ahmed Hamdy
*/

#include<stdio.h>
void main() {

    float a[2][2] , b[2][2];
    printf("Enter the elements of 1st matrix\n");
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 2; j++) {
            printf("Enter a%d%d: ", i + 1 , j + 1);
            fflush(stdin); fflush(stdout);
            scanf("%f", &a[i][j]);
        }
    }
    printf("Enter the elements of 2nd matrix\n");
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 2; j++) {
            printf("Enter b%d%d: ", i + 1 , j + 1);
            fflush(stdin); fflush(stdout);
            scanf("%f", &b[i][j]);
        }
    }
    printf("Sum Of Matrix:\n");
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 2; j++) {
            printf("%.1f " , a[i][j] + b[i][j]);
        }
        printf("\n");
    }
}