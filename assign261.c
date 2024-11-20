#include<stdio.h>

void DisplayASCII()
{
	int i = 0;
	
	printf("%-10s %-10s %-10s %-10s\n","Symbol","Decimal","Hexadecimal","Octal");
	
	printf("\n");
	
	for(i = 0;i <= 127;i++)
	{
		char symbol = (i >= 32 && i<=127) ? (char)i : ' ';
		
		printf("%-10c %-10d %-10X %-10o\n",symbol,i,i,i);
	}
}


int main()
{
  
  DisplayASCII();
	
	return 0;
}