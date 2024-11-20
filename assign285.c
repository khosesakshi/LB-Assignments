#include<stdio.h>

int CountWhite(char *str)
{
	int iCount = 0;
	
	 while (*str != '\0')
	 {
	 	if(*str == ' ')
	 {
	    iCount++;
	}
		*str++;
	}
	return iCount;
}

int main()
{
	int iRet = 0;
	char arr[20];
	
	printf("Enter string:\n");
	scanf("%[^'\n']s",arr);
	
    iRet = CountWhite(arr);
	
	printf("the count of white space is :%d\n",iRet);
	
	return 0;
}