#include<stdio.h>
int main()
{
	float x1,x2,x3,x4,x5;
	printf("\nEnter the marks of Physics: ");
	scanf("%f",&x1);
	printf("\nEnter the marks of Chemistry: ");
	scanf("%f",&x2);
	printf("\nEnter the marks of Maths: ");
	scanf("%f",&x3);
	printf("\nEnter the marks of English: ");
	scanf("%f",&x4);
	printf("\nEnter the marks of Hindi: ");
	scanf("%f",&x5);
	float p = (x1 + x2 + x3 + x4 +x5)/5;
	printf("\nThe Final Percentage %f",p);
	return 0;
}
