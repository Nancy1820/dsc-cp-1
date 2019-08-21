#include<stdio.h>
#include<conio.h>
void main()
{
 int a,b;
 clrscr();
 printf("enter the numbers");
 scanf("%d%d",&a,&b);
 a=a+b;
 b=a-b;
 a=a-b;
 printf("a is %d b is %d",a,b);
getch();
}

