#include<stdio.h>

void Pattern(int iRow,int iCol)
{
	int i = 0,j = 0;
	
	for(i = 1;i <= iRow+2 ;i++)
	{
	for(j = 1;j <= iCol+2;j++)
	{
	if(i == 1 || i == iRow +2 || j == 1 || j == iCol + 2)
	{
		printf("*\t");
	}
	else if(j <= iRow - i + 2)
	{
		printf("#\t");
	}
	else if(j == iRow - i + 3)
	{
		printf("*\t");
	}
	else
	{
	printf("$\t");
}
}
	printf("\n");
}
}

int main()
{
	int iValue1 = 0,iValue2 = 0;
	
	printf("Enter number of rows:\n");
	scanf("%d",&iValue1);
	
	printf("Enter number of columns:\n");
	scanf("%d",&iValue2);
	
	Pattern(iValue1,iValue2);
	
	return 0;
}