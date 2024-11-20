#include <stdio.h>
#include <stdlib.h>


void Range(int Arr[], int iLength,int iStart,int iEnd)
 {
 	int iCnt = 0;
 	
 	printf("Elements within the range %d to %d are:\n",iStart,iEnd);
    for (iCnt = 0; iCnt < iLength; iCnt++) 
	{
        if (Arr[iCnt] >= iStart && Arr[iCnt] <= iEnd)
		 {
           printf("%d",Arr[iCnt]);
        }
    }
    printf("\n");
}

int main()
 {
    int iSize = 0, iStart = 0,iEnd = 0;
    int *p = NULL;
    
	printf("Enter number of elements: ");
    scanf("%d", &iSize);

    printf("Enter the starting point of the Range: ");
    scanf("%d", &iStart);
     
     printf("Enter the Ending point of the Range: ");
    scanf("%d", &iEnd);

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

    Range(p, iSize,iStart,iEnd);

    free(p);
 
   return 0;
}