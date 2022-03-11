#include<stdio.h>
#include<conio.h>
main(){
int sayi1;
printf("sayi1: ");
scanf("%d", &sayi1);
int sayi2;
printf("sayi2:");
scanf("%d", &sayi2);
if(sayi1>sayi2)
printf("sayi1 sayi2den buyuk");
else if(sayi1<sayi2)
printf("sayi1 sayi2den buyuk degil");
else
printf("sayi1 sayi2 ye esit");
}
