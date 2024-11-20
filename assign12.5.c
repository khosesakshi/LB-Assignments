#include<stdio.h>
int CountDiff(int iNo)
{
 int iEven = 0;
 int iOdd  = 0;
	int iDigit = 0;
	
	if(iNo < 0)
	{
		iNo = -iNo;
	}
	
	while(iNo > 0)
	{ 
	iDigit = iNo % 10;
	if(iDigit % 2 == 0)
	{
			iEven += iOdd;
		}
		else
		{
			iOdd += iEven;
		}
     iNo = iNo / 10;
   }
	return iEven - iOdd;
}

int main()
{
int iValue = 0;
int iRet = 0;

printf("Enter number:\n");
scanf("%d",&iValue);

iRet= CountDiff(iValue);
 
 printf("Diffrence between summetion of even and odd digits is: %d\n",iRet);
 
return 0;
}