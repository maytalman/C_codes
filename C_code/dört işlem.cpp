#include<stdio.h>
#include<conio.h>
main(){
int a,b;
printf("a icin sayi gir:");
scanf("%d", &a);
printf("b icin sayi gir:");
scanf("%d", &b);
int toplam,fark,carpim;
float bolum;
toplam=a + b ;
fark=a -b ;
carpim=a * b;
bolum=(float)a / b ;
printf("toplam: %d \n fark: %d \n carpim: %d \n bolum: %f",toplam,fark,carpim,bolum);
}

