#include<stdio.h>
int SumDigits(int n);
int main()
{
    int number;
    printf("please enter your number: ");
    scanf("%d",&number);
    printf("the sum of digits of given number is %d",SumDigits(number));
    return 0;
}

int SumDigits(int n){
    int rem=0,sum=0;
    for(int i=0;n>0;i++)
    {
        rem = n%10;
        sum += rem;
        n = n/10;
    }
    return sum;
}