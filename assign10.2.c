#include<stdio.h>

void RangeDisplayEven(int iStart,int iEnd)
{
	int iCnt = 0;
	
	if(iStart > iEnd)
	{
		printf("Invalid Range");
		
	}
	for(iCnt = iStart;iCnt <= iEnd;iCnt++)
	if(iCnt % 2 == 0)
	{
		printf("%d\n",iCnt);
	}
}

int main()
{
	
	int iValue1 = 0, iValue2 = 0;
	
	printf("Enter starting point:\n");
	scanf("%d",&iValue1);
	
	printf("Enter ending point:\n");
	scanf("%d",&iValue2);
	
	RangeDisplayEven(iValue1,iValue2);
	
	return 0;
	
}