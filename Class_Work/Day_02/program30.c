#include<stdio.h>

void Display()
{
    int iCnt=0;

    
    while(iCnt<5)
    {
        iCnt ++;
        printf("%d\n",iCnt);
    }
}

int main()
{
    
    Display();

    return 0;
}