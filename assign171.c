#include<stdio.h>

void Pattern(int iNo)
{
	int iCnt = 0;
	
	for(iCnt = 1;iCnt <= iNo ;iCnt++)
	{
		printf("$\t*\t",iCnt);
	}
	printf("\n");
	
}

int main()
{
	int iValue = 0;
	printf("enter number:");
	scanf("%d",&iValue);
	
	Pattern(iValue);
	
	return 0;
}