#include<stdio.h>

void OddDisplay(int iNo)
{
	int iCnt = 0;
	
	for(iCnt = 1;iCnt <= iNo ;iCnt += 2)
	{
	       	printf("%d\t",iCnt);
		   
		}
		
	printf("\n");
}

int main()
{
	int iValue = 0;
	printf("enter number:");
	scanf("%d",&iValue);
	
	OddDisplay(iValue);
	
	return 0;
}