#include<stdio.h>
#include<conio.h>
	int main()
{
	int i,j,k=2,m=6;
	for(i=1;i<=4;i++)
{
     for(j=1;j<=4;j++)
{ 
if(j<k)
printf("*");
else
printf(" ");
}
k++;
printf("\n");
}
for(i=1;i<=1;i++)
{
for(j=1;j<=10;j++)
printf("*");
}
printf("\n");
for(i=1;i<=4;i++)
{
for(j=1;j<=10;j++)
{ 
if(j>m)
printf("*");
else
printf(" ");
}
m++;
printf("\n");
}
getch();
}
