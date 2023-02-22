#include<stdio.h>
int main()
{
	int x;
	printf("\nEnter INR: ");
	scanf("%d",&x);
	float dollar,euro,dhiram,yuan,yen;
	dollar = x/82.82;
	euro = x/87.99;
	dhiram = x/22.55;
	yuan = x/12.02;
	yen = x/0.61;
	printf("\nThe Value of %d INR In Dollar: %f USD",x,dollar);
	printf("\nThe Value of %d INR In Euro: %f EURO",x,euro);
	printf("\nThe Value of %d INR In Dhiram: %f DHIRAM",x,dhiram);
	printf("\nThe Value of %d INR In Yaun: %f YUAN",x,yuan);
	printf("\nThe Value of %d INR In Yen: %f YEN",x,yen);
	
	return 0;
}
