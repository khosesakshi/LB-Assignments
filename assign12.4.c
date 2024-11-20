#include<stdio.h>
int MultDigits(int iNo)
{
 int iCount = 0;
	int iDigit = 0;
	int iNum = 1;
	
	if(iNo < 0)
	{
		iNo = -iNo;
	}
	
	while(iNo > 0)
	{ 
	iDigit = iNo % 10;
	if(iDigit != 0)
	{
		iNum *= iDigit;
		}
		iNo = iNo / 10;
	}

	return iNum;
}

int main()
{
int iValue = 0;
int iRet = 0;

printf("Enter number:\n");
scanf("%d",&iValue);

iRet= MultDigits(iValue);
 
 printf("Multiplication of all digits is: %d\n",iRet);
 
return 0;
}