/*
 * main.c
 *
 *  Created on: Aug 26, 2023
 *      Author: Ahmed Hamdy
 */

#include <stdio.h>
#define PI 3.1415
#define area(r) ((r) * (r) * PI)
void main() {
	int r;
	printf("Enter the radius: ");
	fflush(stdout);
	scanf("%d", &r);
	printf("Area = %.2f", area(r));

}
