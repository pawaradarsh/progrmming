//input 7
//output 7 6 5 4 3 2 1  

//input 3
//output 3 2 1  

#include<stdio.h>

void Display(int iNo)
{
   int iCnt = 0;
   for(iCnt=iNo;iCnt>=1;iCnt--)
   {
    printf("%d\t",iCnt);
   }
   printf("\n");
}
int main()
{
    int iFrequency = 0;

    printf("Enter the frequency of symbol :\n");
    scanf("%d",&iFrequency);

    Display(iFrequency);

    
    return 0;
}