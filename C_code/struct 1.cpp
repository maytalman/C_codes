#include<stdio.h>
#include<locale.h>
	struct iscibilgi{
		char ad[20],soyad[20];
		int yas,maas;
	}isci;
	void listele(struct iscibilgi isci){
		printf("\n\tAdýnýzý giriniz: ");gets(isci.ad);
		printf("\n\tSoyadýnýzý giriniz:  ");gets(isci.soyad);
		printf("\n\tYaþýnýz: ");scanf("%d",&isci.yas);
		printf("\n\tAylýk ücretiniz: ");scanf("%d",&isci.maas);
		printf("\n\t Çalýþanýmýzýn adý %s %s,%d yaþýnda ve %d tl aylýk ücret alýyor.",isci.ad,isci.soyad,isci.yas,isci.maas);
	}
	main(){
		setlocale(LC_ALL,"Turkish");
		listele(isci);
	}
