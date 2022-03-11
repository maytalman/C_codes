#include<stdio.h>
#include<conio.h>
main(){
int a,b,c;
printf("a icin bir sayi girin:");
scanf("%d", &a);
printf("b icin bir sayi girin:");
scanf("%d" , &b);
printf("c icin bir sayi girin:");
scanf("%d",&c);
int d;
d=a+b+c;
printf("d: %d",d);
float e;
e=(float)d/3;
printf("e: %f",e);
}
