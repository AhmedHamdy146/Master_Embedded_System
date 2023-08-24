// Write c Program to store information of a student using struct

#include <stdio.h>

struct SStudent {
	char m_name[50];
	int m_Roll;
	float m_Marks;
};

void main(void) {
	struct SStudent student;
	printf("Enter information of students:\n");
	printf("Enter name: ");
	fflush(stdout);
	fgets(student.m_name, 50 , stdin);
	printf("Enter roll number: ");
	fflush(stdout);
	scanf("%d", &student.m_Roll);
	printf("Enter marks: ");
	fflush(stdout);
	scanf("%f", &student.m_Marks);

	printf("Displaying Information\nname: %sRoll: %d\nMarks: %.2f",
			student.m_name, student.m_Roll, student.m_Marks);
}
