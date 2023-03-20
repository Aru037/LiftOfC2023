#include<stdio.h>
int operation(int a, int b,int value);
int main(){
    int a,b;
    printf("please enter your first number(a): ");
    scanf("%d",&a);
    printf("please enter your secound number(b): ");
    scanf("%d",&b);
    int value;
    printf("enter 0 if you want to do addition\nenter 1 if you want to do subtraction\nenter 2 if you want to do multiplication\nenter 3 if you want to do division\nenter 4 if you want to do reminder\n enter:");
    scanf("%d",&value);
    operation(a,b,value);
    return 0;
}
int operation(int a,int b, int value)
{ int sum,sub,mul,div,rem;
switch (value)
{
    case 0:
    sum = a+b;
    printf("sum is = %d",sum);
    break;
case 1:
sub = a-b;
printf("subtraction is = %d",sub);
case 2:
mul=a*b;
printf("multiplication is = %d",mul);
break;
case 3:
div= a/b;
printf("reminder is = %d",div);
break;
case 4:
rem = a%b;
printf("reminder is = %d",rem);
break;

default:
printf("invalid input.");
break;
}
return 0;
}