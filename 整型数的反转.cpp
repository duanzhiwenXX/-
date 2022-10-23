#include <stdio.h>
void ShowRevertNum(int iNum)
{
 while (iNum > 10)
 {
printf("%d", iNum % 10);
 iNum = iNum / 10;
 }
 printf("%d\n", iNum);
}
int main(void)
{
 int iNum;
 printf("Please input a number :");
 scanf("%d", &iNum);
 printf("After revert : ");
 ShowRevertNum(iNum);
 return 0;
}

