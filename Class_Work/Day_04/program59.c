#include<stdio.h>
#include<stdbool.h>

bool CheckPrime(int iNo)
{
    int iCnt =0;
    bool bFlag = false;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 2,bFlag = true ; iCnt <= (iNo/2) ; iCnt++)
    {
        if(iNo % iCnt == 0)
        {
            bFlag = false;
            break;              //Optimization
        }
    }
    return bFlag;
}
// Time Complexity : O(1) to O(N/2)   

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

/*
Time Complexity : For NonPrime : 1 or 2
Time Complexity : For Prime : O(N/2)
*/