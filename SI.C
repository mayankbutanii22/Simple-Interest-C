#include<stdio.h>
#include<conio.h>
main()
{
int p,r,t;
float si;
clrscr();
printf("Enter a principle amount,rate,time: ");
scanf("%d%d%d",&p,&r,&t);
si=p*r*t/100;
printf("%f is the si",si);
getch();
}
