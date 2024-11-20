#include<stdio.h>

int RangeDisplayEven(int iStart,int iEnd)
{
	int iCnt = 0;
	int iSum = 0;
	
	if((iStart <= 0 || iEnd <= 0 || iStart > iEnd))
	{
		printf("Invalid Range");
		return 0;
	}
	for(iCnt = iStart;iCnt <= iEnd;iCnt++)
	{
	if(iCnt % 2 == 0)
	{	
         iSum += iCnt;
	
	}

  }
  	return iSum;
}

int main()
{
	
	int iValue1 = 0, iValue2 = 0,iRet = 0;
	
	printf("Enter starting point:\n");
	scanf("%d",&iValue1);
	
	printf("Enter ending point:\n");
	scanf("%d",&iValue2);
	
   iRet = RangeDisplayEven(iValue1,iValue2);
   
   if(iRet != 0)
   {
   	printf("Addition of even numbers is :%d\n",iRet);
   }
return 0;
}