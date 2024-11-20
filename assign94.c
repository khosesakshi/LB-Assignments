#include<stdio.h>

double FhtoCs(float fTemp)
{
	float fCelcius = 0.0;
  fCelcius=(fTemp - 32) * (5.0 /9.0);
  
  return fCelcius;	
}

int main()
{
	float fValue = 0.0;
	double dRet = 0.0;
	
	printf("Enter temperature in Fahrenheit\n");
	scanf("%f",&fValue);
	
	dRet = FhtoCs(fValue);
	
	printf("Temperature in celcius:%.5f\n",dRet);
	
	
	
	return 0;
}