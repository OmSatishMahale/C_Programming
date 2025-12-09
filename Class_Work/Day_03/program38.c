#include<stdio.h>

void Display(int iNo)
{
    int iCnt=0;
    for(iCnt = 1;iCnt>=iNo;iCnt++)
    {
        printf("%d\n",iCnt);
    }
}

int main()
{
    
    int iValue = 0;
    printf("To Display number in reverse order : \n");
    scanf("%d",&iValue);
    
    Display(iValue);

    return 0;
}