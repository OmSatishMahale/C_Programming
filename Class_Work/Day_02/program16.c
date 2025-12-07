////////////////////////////////////////////////////////////
//
//  Required Header Files
//
////////////////////////////////////////////////////////////

#include<stdio.h>                               //For I/O
#include<stdbool.h>                             //For bool Datatype

////////////////////////////////////////////////////////////
//
//  Function Name : CheckEvenOdd
//  Description :   It is used to check even odd
//  Input :         Integer
//  Output :        Boolean
//  Author :        Om Satish Mahale
//  Date :          10/10/2025
//
////////////////////////////////////////////////////////////
bool CheckEvenOdd(int iNo)
{
    int iRem=0;

    iRem = iNo % 2;

    if(iRem == 0)
    {  return true; }
    else
    {  return false; }
}

////////////////////////////////////////////////////////////
//
//  Entry Point Function
//
////////////////////////////////////////////////////////////

int main()
{
    int iValue=0;
    bool bRet=false;
    
    printf("Enter Number : \n");
    scanf("%d",&iValue);

    bRet = CheckEvenOdd(iValue);

    if(bRet == true)
    { printf("%d is even number\n",iValue); }
    else
    { printf("%d is odd number\n",iValue); }
    return 0;
}

