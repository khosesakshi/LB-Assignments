#include<stdio.h>

void Pattern(int iRow,int iCol)
{
	int i = 0,j = 0;

	
   for(i = 1;i<=iRow;i++)
   {
   	for(j = 1;j <= iCol;j++)
   	
	   {
	   int num = j * 2;
   	{
	   if( i % 2 == 0)
	   {
	   	printf("%d\t",num-1);
	   }
	   else
	   {
	   	printf("%d\t",num);
	   }
	   	
     }
	   
   }
   printf("\n");
   
}
}

int main()
{
  int iValue1 = 0,iValue2 = 0;
  
  printf("Enter number of rows:");
  scanf("%d",&iValue1);
  
  printf("enter number of columns:");
  scanf("%d",&iValue2);
  
  Pattern(iValue1,iValue2);	
	
	return 0;
}