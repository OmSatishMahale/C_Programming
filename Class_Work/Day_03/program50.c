#include<stdio.h>
 
void DisplayFactors(int iNo)
{
    int iCnt =0;
    if(iNo < 0)      //UPDATER
    {
        iNo = -iNo;
    }
    for(iCnt = 1;iCnt <= (iNo/2) ;iCnt++)
    {
        if((iNo % iCnt) == 0)
        {
            printf("%d\n",iCnt);
        }
    }
}
//Time Complexity : O(N/2)

int main()
{

    int iValue=0;

   printf("Enter the number : \t");
   scanf("%d",&iValue);
    DisplayFactors(iValue);

    return 0;
}