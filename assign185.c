#include<stdio.h>

int EvenFactorial(int iNo)
{
	int iCnt = 0;
	int iFact = 1;
	
	if(iNo < 0)
	{
		iNo = -iNo;
	}
	
	for(iCnt =2;iCnt <=  iNo;iCnt+=2)
	{
		iFact =iFact* iCnt;
	}
	return iFact;
}

int OddFactorial(int iNo)
{
	int iCnt = 0;
	int iFact = 1;
	
	if(iNo < 0)
	{
		iNo = -iNo;
	}
	
	for(iCnt =1;iCnt <=  iNo;iCnt+=2)
	{
		iFact =iFact* iCnt;
	}
	return iFact;
}

int FactorialDiff(int iNo)
{
	int iAns = 0;
	
	int iEvenFact = EvenFactorial(iNo);
	int iOddFact  = OddFactorial(iNo);
	
	iAns = iEvenFact - iOddFact;
	
	return iAns;
	
}

int main()
{
	
	int iValue = 0,iRet = 0;
	
	printf("enter numebr:\n");
	scanf("%d",&iValue);
	
	iRet =FactorialDiff(iValue);
	
	printf("Factorial Difference  is %d",iRet);
	
	return 0;
}