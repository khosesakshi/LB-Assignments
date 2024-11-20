#include <stdio.h>
#include <stdlib.h>


 void DigitSum(int Arr[], int iLength)
 {
 	 int iCnt = 0;
 	 
 	for (iCnt = 0; iCnt < iLength; iCnt++) 
 	{
	 
 	int iSum = 0;
    int num = Arr[iCnt];
 	
  while(num > 0)
  {
  	iSum = iSum +(num % 10);
  	num /= 10;
  }
  printf("%d", iSum);
}
printf("\n");
}

int main()
 {
    int iSize = 0,iCnt = 0;
    int *p = NULL;
    
	printf("Enter number of elements:\n ");
    scanf("%d", &iSize);

    
    p = (int *)malloc(iSize * sizeof(int));
    
	if (p == NULL) 
	{
      printf("Unable to allocate memory");
        return -1;
    }

    printf("Enter %d elements:\n", iSize);
    for (int iCnt = 0; iCnt < iSize; iCnt++) 
	{
        printf("Enter element %d\t: ", iCnt + 1);
        scanf("%d", &p[iCnt]);
    }

   DigitSum(p,iSize);

    free(p);
 
   return 0;
}