#include <stdio.h>
#include <stdlib.h>


 void Digits(int Arr[], int iLength)
 {
 	int iCnt = 0;
 	
  printf("Numbers with 3 digits are:");
 	
    for (iCnt = 0; iCnt < iLength; iCnt++) 
	{
        if (Arr[iCnt] >= 100 && Arr[iCnt] <= 999)
        {
        	printf("%d",Arr[iCnt]);
		
	}
     
}     printf("\n");
        
 }

int main()
 {
    int iSize = 0;
    int *p = NULL;
    int iCnt = 0;

    printf("Enter number of elements: ");
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
        printf("Enter element %d: ", iCnt + 1);
        scanf("%d", &p[iCnt]);
    }

   Digits(p, iSize);

    free(p);
 
   return 0;
}