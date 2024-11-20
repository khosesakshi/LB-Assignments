#include<stdio.h>
int CountTwo(int iNo)
{
	int iCount = 0;
	
	while(iNo > 0)
	{
		if(iNo % 10 < 6)
		{
			iCount++;
		}
		iNo = iNo / 10;
	}
	return iCount;
}

int main()
{
int iValue = 0;
int iRet = 0;

printf("Enter number:\n");
scanf("%d",&iValue);

iRet= CountTwo(iValue);
 
 printf("Frequency of less than 6 digit  is %d\n",iRet);
 
return 0;
}