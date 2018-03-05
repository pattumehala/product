#include<stdio.h>
int main()
{
int num,product=1,rem=0;
while(num!=0)
{
rem=num%10;
product=product*rem;
num=num/10;
}
printf("\nThe product is:%d",product);
return 0;
}
