// Take a float input and print it's fractional part of the input?
#include<stdio.h>
int main()
{
	float x;
	printf("\nEnter the value of x: ");
	scanf("%f",&x);
	int y;
	y = x;
	float z;
	z = x - y;
	printf("\nThe fractional value of x: %f",z);
	return 0;
}
