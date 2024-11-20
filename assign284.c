#include<stdio.h>

void Display(char *str)
{
	 while (*str != '\0')
	 {
	 	if(*str >= '0' && *str <= '9')
	 {
	    printf("%c",*str);
	}
		*str++;
	}
}

int main()
{
	char arr[20];
	
	printf("Enter string:\n");
	scanf("%[^'\n']s",arr);
	
	Display(arr);
	
	
	
	return 0;
}