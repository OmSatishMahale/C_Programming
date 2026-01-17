//Prime Number

#include<stdio.h>
#include<stdbool.h>

int CheckPrime(int iNo)
{
    int iCnt =0,iFrequency=0;
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    for(iCnt =2 ; iCnt < (iNo/2) ; iCnt++)
    {
        if(iNo % iCnt == 0)
        {
            iFrequency++;
        }
    }
        if(iFrequency == 0)
        {
            return true;        //No Factors
        }
        else
        {
            return false;       //Atleast One Factor
        }
}

int main()
{

    int iValue = 0;
    bool bRet=false;

    printf("Enter the number : \n");
    scanf("%d",&iValue);

    bRet = CheckPrime(iValue);

    if(bRet == true)
    {
        printf("%d : Is Prime Number\n",iValue);
    }
    else
    {
        printf("%d : Is Not Prime Number\n",iValue);
    }

    return 0;
}