
/*
                ALGORITHM
START
    Accept Number from user an store as no
    Divide iNo by 2
    If the remainder is 0 
        then display even
    otherwise
        display odd 
STOP
*/

#include<stdio.h>

void CheckEvenOdd(int iNo)
{
    int iRem=0;

    iRem = iNo % 2;

    if(iRem == 0)
    {
        printf("Number is even...");
    }
    else
    {
        printf("Number is odd...");
    }
}

int main()
{
    int iValue=0;
    printf("Enter Number : \n");
    scanf("%d",&iValue);

    CheckEvenOdd(iValue);

    return 0;
}