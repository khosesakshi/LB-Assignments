#include<stdio.h>

void Display(char ch)
{
	printf("Character :%c\n",ch);
	printf("Decimal :%d\n",ch);
	printf("Octal :%o\n",ch);
	printf("Hexadecimal: %X\n",ch);
}


int main()
{
  char cValue = '\0';
  
  printf("Enter a character:");
  scanf("%c",&cValue);
  
  Display(cValue);
	
	return 0;
}