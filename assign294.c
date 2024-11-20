#include<stdio.h>

int LastChar(char *str,char ch)
{
	int index = -1;
	int currentindex = 0;
	
	while(*str != '\0')
	{
		if(*str == ch)
		{
			 index = currentindex;
		}
		str++;
		currentindex++;
	}
return index;
}

int main()
{
	char arr[20];
	char cValue;
	int iRet = 0;
	
	printf("Enter string:");
	scanf("%[^'\n']s",arr);
	
	getchar();
	
	printf("Enter the character:");
	scanf("%c",&cValue);
	
	iRet = LastChar(arr,cValue);
	
	printf("Character location is :%d\n",iRet);
	
	return 0;
}