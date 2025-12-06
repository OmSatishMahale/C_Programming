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

//////////////////////////////////////////////////////
//
//  Required Header File
//
//////////////////////////////////////////////////////

#include<stdio.h>

//////////////////////////////////////////////////////
//
//  Function Name : AdditionTwoNumbers
//  Description :   It is Used to perform Addition
//  Input :         Float,Float
//  Output :        FLoat 
//  Author :        Om Satish Mahale
//  Date :          09/10/2025
//
//////////////////////////////////////////////////////

float AdditionTwoNumbers(
                            float fNo1,                 // First Input
                            float fNo2                  //Second Input
                        )
{
    float fSum=0.0f;                                    //To store the result

     
    if(fNo1<0.0f)                                       //Updater
    {
        fNo1 = -fNo1;
    }
    if(fNo2<0.0f)
    {
        fNo2 = -fNo2;
    }

    fSum = fNo1+fNo2;                                   //BUSINESS LOGIC
    return fSum;
}  //End of AdditionTwoNumbers


//////////////////////////////////////////////////////
//
//  Entry point Function for the Application
//
//////////////////////////////////////////////////////
int main()
{

    float fValue1=0.0f,fValue2=0.0f;                     // To accept user Input
    float fRet=0.0f;                                     // To store the result

    printf("Enter First number : \n");
    scanf("%f",&fValue1);

    printf("Enter Second number : \n");
    scanf("%f",&fValue2);

    fRet = AdditionTwoNumbers(fValue1,fValue2);           // Metho Call

    printf("Sum is : %f\n",fRet);

    return 0;
}  //End of Main

//////////////////////////////////////////////////////
//
//  Test Cases Succefully Done
//
//  Input1 = 10.5     Input2 = 3.2      Output : 13.7
//  Input1 = -10.5    Input2 = 3.2      Output : 13.7
//  Input1 = 10.5     Input2 = -3.2     Output : 13.7
//  Input1 = -10.5    Input2 = -3.2     Output : 13.7
//  Input1 = 10.5     Input2 = 0.0      Output : 10.5
//
//////////////////////////////////////////////////////

