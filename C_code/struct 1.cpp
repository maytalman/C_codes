#include<stdio.h>
#include<locale.h>
	struct iscibilgi{
		char ad[20],soyad[20];
		int yas,maas;
	}isci;
	void listele(struct iscibilgi isci){
		printf("\n\tAd�n�z� giriniz: ");gets(isci.ad);
		printf("\n\tSoyad�n�z� giriniz:  ");gets(isci.soyad);
		printf("\n\tYa��n�z: ");scanf("%d",&isci.yas);
		printf("\n\tAyl�k �cretiniz: ");scanf("%d",&isci.maas);
		printf("\n\t �al��an�m�z�n ad� %s %s,%d ya��nda ve %d tl ayl�k �cret al�yor.",isci.ad,isci.soyad,isci.yas,isci.maas);
	}
	main(){
		setlocale(LC_ALL,"Turkish");
		listele(isci);
	}
