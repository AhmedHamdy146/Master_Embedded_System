// C program to add two complex numbers by passing struct to a function

#include <stdio.h>

struct SComplex
{
	float m_R;
	float m_Im;
};

struct SComplex add(struct SComplex n1 , struct SComplex n2);
void main(void) {
	struct SComplex n1 , n2 , res;
	printf("For 1st complex number\n");
	printf("Enter real and imaginary respectively: ");
	fflush(stdout); scanf("%f %f", &n1.m_R , &n1.m_Im);

	printf("For 2nd complex number\n");
	printf("Enter real and imaginary respectively: ");
	fflush(stdout); scanf("%f %f", &n2.m_R , &n2.m_Im);
	res = add(n1 , n2);
	printf("Sum = %.1f+%.1fi", res.m_R , res.m_Im);

}

struct SComplex add(struct SComplex n1 , struct SComplex n2) {
	struct SComplex result;
	result.m_R = n1.m_R + n2.m_R;
	result.m_Im = n1.m_Im + n2.m_Im;
	return result;
}