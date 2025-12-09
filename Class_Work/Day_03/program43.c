//INPUT : 12    2   OUTPUT : TRUE
//INPUT : 12    3   OUTPUT : TRUE
//INPUT : 12    5   OUTPUT : FALSE
//INPUT : 12    6   OUTPUT : TRUE
//INPUT : 12    7   OUTPUT : FALSE

#include<stdio.h>
 

int main()
{
    int iValue1,iValue2 =0;
    printf("Enter First Number : \n");
    scanf("%d",&iValue1);
    printf("Enter Second Number : \n");
    scanf("%d",&iValue2);

    if((iValue1 % iValue2) == 0)
    {
        printf("It is Completely DIVISIBLE...");
    }
    else
    {
        printf("It is not DIVISIBLE...");
    }

    return 0;
}