#include<stdio.h>
int main()
{
	int a,b;
	printf("Enter the value of a: ");
	scanf("%d",&a);
	printf("\nEnter the value of b: ");
	scanf("%d",&b);
	int q,r;
	q = a/b;
	r = a -(b*q); // Formula For Findind Remainder
	printf("\nThe Remainder when %d divided by %d: %d",a,b,r);
	return 0;
	
	
	
}
