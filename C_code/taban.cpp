#include<stdio.h>
#include<conio.h>
#include<math.h>
	int main(){
		int al,taban,toplam=0,x=sizeof al;
		printf("\n\tcevirmek istediðiniz sayiyi onluk tabanda giriniz: ");scanf("%d",&al);
		printf("\n\t1--)2");
		printf("\n\t2--)4");
		printf("\n\t3--)5");
		printf("\n\t4--)8");
		printf("\n\t%d sayisini hangi tabana cevirmek istiyorsunuz? Numarasini giriniz.",al);scanf("%d",&taban);
		switch(taban){
		case 1:
			printf("\n\t");
			for(int i=x-1;i>=0;--i){
				if(al&1<<i){
					putchar('1');
				}
				else
					putchar('0');
		}
			break;
		case 2:
			for(int i=x-1;i>=0;--i){
				if(al&1<<i){
					toplam=toplam+(1*pow(4,i));
					}
				else
				continue;
		}
			printf("\n\tgirdiðiniz sayinin 4'luk tabandaki karsiligi %d ",toplam);break;
		case 3:
			for(int i=x-1;i>=0;--i){
				if(al&1<<i){
					toplam=toplam+(1*pow(5,i));
				}
				else
				continue;
		}
			printf("\n\tgirdiðiniz sayinin 5'lik tabandaki karsiligi %d ",toplam);break;
		case 4:
			for(int i=x-1;i>=0;--i){
				if(al&1<<i){
					toplam=toplam+(1*pow(8,i));
				}
				else
				continue;
		}
			printf("\n\tgirdiðiniz sayinin 8'lik tabandaki karsiligi %d ",toplam);break;
		 
	}
}
