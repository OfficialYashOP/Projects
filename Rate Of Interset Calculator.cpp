#include<stdio.h>
int main()
{
	float p,r,t,si,a;
	printf("\nEnter the value of p: ");
	scanf("%f",&p);
	printf("\nEnter the value of r: ");
	scanf("%f",&r);
	printf("\nEnter the value of t: ");
	scanf("%f",&t);
	si = (p*r*t)/100;
	a = si +p;
	printf("\nThe Simple Interset: %f",si);
	printf("\nThe final interest: %f",a);
	return 0;
	
}
