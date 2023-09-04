// Write a program in C to print a string in reverse using a pointer

#include <stdio.h>
#include <string.h>
int main() {
    char str[1000];
    printf("Enter a String: ");
    fflush(stdout); fflush(stdin);
    fgets(str , 1000 , stdin);
    short lenOfString = strlen(str);
    char *ptr = str;
    ptr += lenOfString;
    ptr--;
    printf("Reverse of the string is : ");
    while(lenOfString--) {
        printf("%c", *ptr);
        ptr--;
    }
    return 0;
}