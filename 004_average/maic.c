/*
 * maic.c
 *
 *  Created on: Dec 23, 2021
 *      Author: HOANG PC
 */

#include <stdio.h>

int main(void)
{

	float number1, number2, number3;
	double average;

	printf("Enter 3 numbers: ");

	scanf("%f %f %f",&number1 ,&number2, &number3);

	average = (number1 + number2 + number3)/3;

	printf("\nAverage is: %lf\n",average);
	printf("press enter to exit\n");
	while(getchar() != 't')
	{


	}
	getchar();






}
