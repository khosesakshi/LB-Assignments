#include<stdio.h>

double SquareMeter(int iValue)
{
	double dMeter = 0.0;
	dMeter = iValue * 0.0929;
	return dMeter;
}

int main()
{
	int iValue = 0;
	double dRet = 0.0;
	
	printf("Enter area in square feet:\n");
	scanf("%d",&iValue);
	
	dRet = SquareMeter(iValue);
	
	printf("square feet into to the square meter is:%lf\n",dRet); 
	
	return 0;
}