#include<stdio.h>

  int MinimumDigit(int iNo)
  {
    int iDigit=0;
    int iMin=0;

    if(iNo<0)
  {
    iNo=-iNo;
  }
  while(iNo !=0)
  {
    iDigit = iNo % 10;
    if(iDigit<iMin)
    {
      iMin = iDigit;
    }
    iNo = iNo /10;
  }
    return iMin;
  }
  int main()
  {
    int iValue= 0;
    int iRet =0;

    printf("Enter number:\n");
    scanf("%d",&iValue);


   iRet = DigitAverage(iValue);

   printf("Smallest digits is:%d\n",iRet);
    return 0;
  }