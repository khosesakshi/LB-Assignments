#include<stdio.h>

int Difference(char *ptr)
{
	int iSmallCount = 0;
		int iCapitalCount = 0;
	
		while(*ptr != '\0')
	{
		if(*ptr >= 'a' && *ptr <= 'z')
		{
		iSmallCount++;
     	}
	 
		else if(*ptr >= 'A' && *ptr <= 'Z')
		{
		iCapitalCount++;
     	}
		ptr++;
	}
	return iSmallCount - iCapitalCount;
}

int main()
{
	char Arr[30];
	int iRet = 0;

	
	printf("Enter String:\n");
	scanf("%[^'\n']s",Arr);
	
   iRet=Difference(Arr); //Display(100);
	
	printf(" %d\n",iRet);
	
	return 0;
}