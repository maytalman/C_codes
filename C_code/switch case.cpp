#include<stdio.h>
#include<conio.h>
main(){
	int a;
	printf("a icin numara girin:");
	scanf("%d",&a);
switch (a)
{
	case 1:printf("pazartesi");break;
	case 2:printf("salý");break;
	case 3:printf("carsamba"); break;
	case 4:printf("persembe"); break;
	case 5:printf("cuma"); break;
	case 6:printf("cumartesi"); break;
	case 7:printf("pazar"); break;
	default:printf("hatalý girdiniz.");break;
}
}
//hatalý çalýþýyor hatayý bulamadým.
