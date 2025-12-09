//INPUT 10
// 2    4   6   8   10

#include<stdio.h>

void Display(int iNo)
{
    int iCnt=0;
    for(iCnt = 2;iCnt<=iNo;iCnt=iCnt+2)
    {
            printf("%d\n",iCnt);
    }
}

int main()
{
    
    int iValue = 0;
    printf("Enter the number : \t");
    scanf("%d",&iValue);
    
    Display(iValue);

    return 0;
}