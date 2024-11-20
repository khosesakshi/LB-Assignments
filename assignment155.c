#include <stdio.h>
#include <stdlib.h>


 int Product(int Arr[], int iLength)
 {
 	int iCnt = 0;
 	int iProduct = 1;
 	int bHashOdd = 0;
 	
 	
    for (iCnt = 0; iCnt < iLength; iCnt++) 
	{
        if (Arr[iCnt] % 2 != 0)
		 {
           iProduct = iProduct * Arr[iCnt];
           bHashOdd = 1;
        }
    }
    return bHashOdd ? iProduct : 0;
}

int main()
 {
    int iSize = 0,iRet = 0;
    int *p = NULL;
    
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
        printf("Enter element %d\t: ", iCnt + 1);
        scanf("%d", &p[iCnt]);
    }

    iRet = Product(p,iSize);
    
    printf("Product of all Odd elemets is:%d\n",iRet);

    free(p);
 
   return 0;
}