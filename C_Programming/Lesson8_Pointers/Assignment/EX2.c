// Write a program in C to print all the alphabets using a pointer.

#include <stdio.h>

int main() {
    char alp[27] = {};
    int i = 65;
    char *ptr = alp;
    for(i = 65; i < 91; i++) {
        *ptr = (char)i;
        ptr++;
    }
    *ptr = '\0';
    ptr = alp;
    while(*ptr != '\0') {
        printf("%c ", *ptr);
        ptr++;
    }
    return 0;
}