#include<stdio.h>

void StrRevX(char *str)
{
	char *start = str;
	char *end = str;
	char temp;
	
	while(*end != '\0')
	{
		end++;
	}
	end--;
	
	while(start < end)
	{
		temp = *start;
		*start = *end;
		*end = temp;
		
		start++;
		end--;
	}
	}

int main()
{
	char arr[20];
	
	printf("Enter string:");
	scanf("%[^'\n']s",arr);
	
	StrRevX(arr);
	
	printf("MOdified string ia %s\n",arr);
	
	return 0;
}