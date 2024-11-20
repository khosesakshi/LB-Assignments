#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL chkeven(int iNo)
{
	if(iNo%2 == 0)
	{
		return TRUE;
	}
	else
	{
		return FALSE;
		
	}
}

int main()
{
	int iValue = 0;
	BOOL bRet = FALSE;
	
	printf("enter number:");
	scanf("%d",&iValue);
	
	bRet = chkeven(iValue);
	if(bRet == TRUE)
	{
		printf("Number is even.\n");
	}
	else
	{
		printf("Number is odd.\n");
	}
	return 0;
}