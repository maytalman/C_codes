#include<stdio.h>
	struct iscibilgi{
		char ad[20],soyad[20];
		int yas,maas;
	}isci;
	void listele(struct iscibilgi isci){
		printf("\n\tAdinizi giriniz: ");gets(isci.ad);
		printf("\n\tSoyadinizi giriniz:  ");gets(isci.soyad);
		printf("\n\tYasiniz: ");scanf("%d",&isci.yas);
		printf("\n\tAylik ucretiniz: ");scanf("%d",&isci.maas);
		printf("\n\t Calisanimizin adi %s %s,%d yasinda ve %d tl aylik ucret aliyor.",isci.ad,isci.soyad,isci.yas,isci.maas);
	}
	main(){
		listele(isci);
	}
