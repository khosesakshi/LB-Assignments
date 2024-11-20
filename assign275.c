#include<stdio.h>
#include<string.h>

void Reverse(char *str)
{
	int length = strlen(str);
	char temp;
	
	for(int i = 0,j = length - 1;i < j; i++,j--)
	{
		temp = str[i];
		str[i] = str [j];
		str[j] = temp;
	}
	printf("Reversed String :%s\n",str);
	
}


int main()
{
	char arr[20];
	int iRet = 0;
	
	printf("Enter the String:");
	scanf("%[^'\n']s",arr);
	
    Reverse(arr);
    
	return 0;
}