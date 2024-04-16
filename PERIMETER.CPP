#include<stdio.h>
#include<conio.h>
#define pi 3.14
main()
{
int r;
float perimeter,area;
clrscr();
printf("Enter a radius value: ");
scanf("%d",&r);
printf("%d",r);
area=pi*r*r;
perimeter=2*pi*r;
printf("Area of circle is %.2f and perimeter is %.2f",area,perimeter);


getch();
}