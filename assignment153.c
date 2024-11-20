#include <stdio.h>
#include <stdlib.h>


int LastOcc(int Arr[], int iLength, int iNo)
 {
 	int iCnt = 0;
 	
    for (iCnt = iLength; iCnt >= 0; iCnt--) 
	{
        if (Arr[iCnt] == iNo)
		 {
            return iCnt;
        }
    }
    return -1;
}

int main()
 {
    int iSize = 0, iValue = 0;
    int *p = NULL;
    int iRet = 0;

    printf("Enter number of elements: ");
    scanf("%d", &iSize);

    printf("Enter the number to search for: ");
    scanf("%d", &iValue);

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

    iRet = LastOcc(p, iSize,iValue);

    if (iRet == -1)
	 {
        printf("there s no such number");
    } 
	else
	 {
        printf("Last Occurance of number is at index %d\n",iRet);
    }

    free(p);
 
   return 0;
}