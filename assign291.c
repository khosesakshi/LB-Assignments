#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkChar(char *str,char ch)
{
	while(*str != '\0')
	{
		if(*str == ch)
		{
			return TRUE;
		}
		str++;
	}
	return FALSE;
}

int main()
{
	char arr[20];
	char cValue = '\0';
	BOOL bRet = 0;
	
	printf("Enter string:");
	scanf("%[^'\n']s",arr);
	
	getchar();
	
	printf("Enter the character:");
	scanf("%c",&cValue);
	
	bRet = ChkChar(arr,cValue);
	
	if(bRet == TRUE)
	{
		printf("character found:");
	}
	else
	{
		printf("Character not found:");
	}
	return 0;
}