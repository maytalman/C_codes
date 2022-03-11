#include<stdio.h>
#include<conio.h>
#include<math.h>
main(){
	int adettek=0,toplam=0,n;
	int adetcift=0,carpim=1,aritmetikortalama,geometrikortalama;

	for(int i=0;i<10;i=i+1){
	printf("n icin deger girin:");
	scanf("%d",&n);
}
	
		if(n%2==0){
		carpim=carpim*n;
		adetcift++;

	}
		else if(n%2==1){
		toplam=toplam+n;
		adettek++;
}

aritmetikortalama=toplam/adettek;
geometrikortalama=pow(carpim,1/adetcift);

	printf("aritmetik ortalama:%d",aritmetikortalama);
	printf("geometrik ortalama:%d",geometrikortalama);
	
	}

