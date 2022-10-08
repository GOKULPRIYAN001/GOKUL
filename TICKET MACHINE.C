#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c,d;
clrscr();
printf("Enter the amount");
scanf("%d",&a);
printf("Enter the ticket");
scanf("%d",&b);
if(a%5==0)
{
c=b*5;
d=a-c;
if(c<=d)
{
printf("balance=%d",d);
printf("\nGet the ticket%d",b);
}
else
printf("Your amount not enough");
}
else
{
printf("Not accepted");
}
getch();
}
