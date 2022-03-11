#include<stdio.h>
	int main(){
		int maas,prim,adet;
		printf("maasinizi giriniz:");scanf("%d",&maas);
		printf("kac urun yaptiniz:");scanf("%d",adet);
		prim=adet*20;
		if(adet>0 && adet<=10)
		printf("alacaginiz prim:%d \n toplam maasiniz:%d",prim,prim+maas);
		else if(adet>10 && adet<=20)
		printf("alacaginiz prim:%d \n toplam maasiniz:%d",prim,prim+maas);
		else
		printf("lutfen 0-20 arasi bir deger girin...");
		
	}
