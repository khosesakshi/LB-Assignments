#include<stdio.h>

int CountCapital(char *ptr)
{
	int iCount = 0;
	
		while(*ptr != '\0')
	{
		if(*ptr >=  65 && *ptr <= 90)
		{
		iCount++;
     	}
		ptr++;
	}
	return iCount;
}

int main()
{
	char Arr[30];
	int iRet = 0;

	
	printf("Enter String:\n");
	scanf("%[^'\n']s",Arr);
	
   iRet=CountCapital(Arr); //Display(100);
	
	printf("Count of Capital character is : %d\n",iRet);
	
	return 0;
}