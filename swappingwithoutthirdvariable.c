#include <stdio.h>
#include<conio.h>
main()
{
 int a,b;
 clrscr();
 printf("Enter 2 numbers:");
 scanf("%d%d",&a,&b);
 b=b+a;
 a=b-a;
 b=b-a;
 printf("Interchanged numbers are=",a,b);
}
