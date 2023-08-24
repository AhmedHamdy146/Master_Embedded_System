// Write c Program to store information of a students using struct


#include <stdio.h>

struct SStudent {
	char m_name[50];
	int m_Roll;
	float m_Marks;
};

void main(void) {
	struct SStudent students[10];
	printf("Enter information of students:\n");
	int i = 0;
	for(i = 0; i < 10; i++) {
		printf("\nFor roll number ");
		fflush(stdout); scanf("%d", &students[i].m_Roll);
		printf("Enter name: ");
		fflush(stdout); fflush(stdin); fgets(students[i].m_name, 50, stdin);
		printf("Enter marks: ");
		fflush(stdout); scanf("%f", &students[i].m_Marks);
	}

	printf("Displaying information of students:\n");
	for(i = 0; i < 10 ; i++) {
		printf("\nInformation for roll number %d:\n", students[i].m_Roll);
		printf("Name: %s", students[i].m_name);
		printf("Marks: %.2f", students[i].m_Marks);
	}
}
