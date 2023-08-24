// C program to add two distances using struct

#include <stdio.h>

struct SDistance
{
	int feet;
	float inch;
};
float add(struct SDistance d1 , struct SDistance d2);
void main(void) {
	struct SDistance d1 , d2;
	printf("Enter information for 1st distance\n");
	printf("Enter Feet: ");
	fflush(stdout); scanf("%d" , &d1.feet);
	printf("Enter inch: ");
	fflush(stdout); scanf("%f", &d1.inch);

	printf("Enter information for 2st distance\n");
	printf("Enter Feet: ");
	fflush(stdout); scanf("%d" , &d2.feet);
	printf("Enter inch: ");
	fflush(stdout); scanf("%f", &d2.inch);

	float res = add(d1 , d2);
	printf("Sum of distances = %.0f'-%.1f\"", res , res - (int)res);
}

float add(struct SDistance d1 , struct SDistance d2) {
	float result = 0;
	d1.inch = d1.inch * 1 / 12;
	d2.inch = d2.inch * 1 / 12;
	result = d1.feet + d1.inch + d2.feet + d2.inch;
	return result;
}