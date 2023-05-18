/*
* 	EX3.c
*	Write a c program to find the transpose of matrix
*   Created on: Feb 13, 2023
*      Author: Ahmed Hamdy
*/

#include<stdio.h>
void main() {

    int r , c;
    printf("Enter rows and column of matrix: ");
    fflush(stdin); fflush(stdout);
    scanf("%d%d", &r , &c);
    int matrix[r][c];
    printf("Enter elements of matrix:\n");
    for(int i = 0; i < r; ++i) {
        for(int j = 0; j < c ; ++j) {
            printf("Enter elements a%d%d", i + 1, j + 1);
            fflush(stdin); fflush(stdout);
            scanf("%d", &matrix[i][j]);
        }
    }
    printf("\nEntered Matrix\n");
    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) {
            printf("%d  " , matrix[i][j]) ;
        }
        printf("\n");
    }
    printf("\n\nTranspose Of Matrix\n");
    for(int i = 0; i < c; i++) {
        for(int j = 0; j < r; j++) {
            printf("%d  " , matrix[j][i]) ;
        }
        printf("\n");
    }
}