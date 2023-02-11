    /*
    * 	EX8.c
    *	Write C Program to simple calculator
    *   Created on: Feb 11, 2023
    *      Author: Ahmed Hamdy
    */

    #include<stdio.h>
    void main() {

        char s;
        printf("Enter operator either + or - or * or divide : ");
        fflush(stdin); fflush(stdout);
        scanf("%c", &s);
        float NumberOne, NumberTwo;
        printf("Enter two operands: ");
        fflush(stdin); fflush(stdout);
        scanf("%f%f", &NumberOne, &NumberTwo);
        switch (s)
        {
            case '+': {
                printf("%f + %f = %f", NumberOne , NumberTwo , NumberOne + NumberTwo);
                break;
            }
            case '-': {
                printf("%f - %f = %f", NumberOne , NumberTwo , NumberOne - NumberTwo);
                break;
            }
            case '*': {
                printf("%f * %f = %f", NumberOne , NumberTwo , NumberOne * NumberTwo);
                break;
            }
            case '/': {
                printf("%f / %f = %f", NumberOne , NumberTwo , NumberOne / NumberTwo);
                break;
            }
            default : {
                printf("Wrong operator\n");
                break;
            }
        }

        
    }

