/*
* 	EX4.c
*	Write a c program to insert an element in an array
*   Created on: Feb 13, 2023
*      Author: Ahmed Hamdy
*/

#include<stdio.h>
void main() {

    int n , x , pos; 
    printf("Enter no of elements : ");
    fflush(stdin); fflush(stdout);
    scanf("%d" , &n);
    int a[n + 1];
    for(int i = 0; i < n ; i++) {
        scanf("%d" , &a[i]);
    }
    printf("Enter the element to be inserted : ");
    fflush(stdin); fflush(stdout);
    scanf("%d", &x);
    printf("Enter the location : ");
    fflush(stdin); fflush(stdout);
    scanf("%d", &pos);
    n++ ;
    for(int i = n - 1 ; i >= 0; --i) {
        if(pos == n) {
            a[n - 1] = x;
            break;
        }
        else if(i + 1 == pos && i + 1 != n) {
            a[i + 1] = a[i];
            a[i] = x;
            break;
        } else {
            a[i + 1] = a[i];
            continue;
        }
    }
    for(int i = 0; i < n ; i++) {
        printf("%d ", a[i]);
    }
}