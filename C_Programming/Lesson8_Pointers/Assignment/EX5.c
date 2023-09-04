// Write a program in C to show a pointer to an array which contents
// are pointer to structure.

#include <stdio.h>
struct SEmployee
{
    char name[100];
    short id;
};

int main() {
    struct SEmployee employees[100];
    struct SEmployee *ptr = employees;
    int n = 0;
    printf("Enter number of employees : ");
    fflush(stdin); fflush(stdout);
    scanf("%d" , &n);
    printf("Data of employees\n");
    int i = 0;
    for(i = 0; i < n; i++) {
        printf("Enter name : ");
        fflush(stdin); fflush(stdout);
        fgets(ptr->name, 100 , stdin);
        printf("Enter Id : ");
        fflush(stdin);fflush(stdout);
        scanf("%hd" , &ptr->id);
        ptr++;
    }
    ptr = employees;
    printf("Data of our employees\n");
    for(i = 0; i < n; i++) {
        printf("Employee Name: %s", ptr->name);
        printf("Employee ID : %hd\n" , ptr->id);
        ptr++;
    }
    return 0;

}