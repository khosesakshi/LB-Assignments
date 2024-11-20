#include<stdio.h>

#define TRUE 1
#define False 0

typedef int BOOL;

BOOL ChkZero(int iNo)
{
	while (iNo > 0)
	{
		if(iNo % 10 == 0)
		{
			return TRUE;
		}
		iNo = iNo / 10;
	}
	return 0;
}

int main()
{
	int iValue = 0;
	BOOL bRet = 0;
	
	printf("Enter number\n");
	scanf("%d",&iValue);
	
	bRet = ChkZero(iValue);
	
	if(bRet == TRUE)
	{
	printf("it contains zero\n");
    }
    else
    {
    	printf("There is no zero:");
	}
	return 0;
}