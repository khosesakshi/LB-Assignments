#include<stdio.h>

double RectArea(float fWidth,float fHeight)
{
	float Area = 0.0;
	Area = fWidth * fHeight;
	
	return Area;
}

int main()
{
	float fValue1 = 0.0,fValue2 = 0.0;
	double dRet = 0.0;
	
	printf("enter width:");
	scanf("%f",&fValue1);
	
	printf("Enter height");
	scanf("%f",&fValue2);
	
	dRet = RectArea(fValue1,fValue2);
	
	printf("Area of reactangle is:%f",dRet);
	
	
	return 0;
}