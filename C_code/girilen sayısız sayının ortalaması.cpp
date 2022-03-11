#include<stdio.h>
#include<conio.h>
main(){
	int toplam=0;
	int girilen=0;
	int n=0;
	int ortalama;
	while(girilen!=-1)
	{
		printf("sayi girin...");
		scanf("%d",&girilen);
		n++;
		toplam=toplam+girilen;
	}   
	toplam++;
	n--;
	printf("ortalama: %d",toplam/n);
}
