/*
Step 1 : Unerstand the problem statement
Step 2 : Write the Algorithm
Step 3 : Select the programming language
Step 4 : Write the program
Step 5 : Test the program
*/

/*  
        Algorithm

START
    Accept first input as No1
    Accept Second input as No2
    If the input is negative then convert it into positive
    Perform Adition of No1 & No2
    Print the Addition on Console
STOP
*/


#include<stdio.h>

float AdditionTwoNumbers(float fNo1,float fNo2)
{
    float fSum=0.0f;

    //Updater 
    if(fNo1<0.0f)
    {
        fNo1 = -fNo1;
    }
    if(fNo2<0.0f)
    {
        fNo2 = -fNo2;
    }

    fSum = fNo1+fNo2;             //BUSINESS LOGIC
    return fSum;
}

int main()
{

    float fValue1=0.0f,fValue2=0.0f,fRet=0.0f;

    printf("Enter First number : \n");
    scanf("%f",&fValue1);

    printf("Enter Second number : \n");
    scanf("%f",&fValue2);

    fRet = AdditionTwoNumbers(fValue1,fValue2);

    printf("Sum is : %f\n",fRet);

    return 0;
}