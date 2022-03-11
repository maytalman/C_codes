#include<stdio.h>
#include<locale.h>

	struct iscibilgi{
		char ad[20],soyad[20];
		int yas,maas;
	}isci;
	void liste(struct iscibilgi isci){
		printf("\n\t adý:");gets(isci.ad);
		printf("\n\t soyadý: ");gets(isci.soyad);
		printf("\n\tyas: ");scanf("%d",&isci.yas);
		printf("\n\tmaas:");scanf("%d",&isci.maas);
		printf("%s %s adlý çalýþanýmýz %d yaþýnda ve %d tl maaþ alýyor.",isci.ad,isci.soyad,isci.yas,isci.maas);
	}
	main(){
		setlocale(LC_ALL,"Turkish");
		liste(isci);
	}
