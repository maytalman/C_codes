#include<stdio.h>
#include<conio.h>
#include<math.h>
	int main(){
		int sayi,adet=0,pay;
		float harmonikort, gecici,toplam=0;
		do
		{
			printf("sayi giriniz:",sayi);
			scanf("%d",&sayi);
			adet++;
			gecici=(float)1/sayi;
			toplam+=(float)gecici;
			printf("toplam %2.2f",(float)toplam-1);
		}
		while(sayi>1);
		if(sayi==1){
			printf("\n sayi girisi sonlandi...");
			printf("\n %d adet sayi girdiniz.",adet-1);
			printf("\n paydanin degeri: %2.2f",toplam-1);
		}
		pay=adet-1;
		harmonikort=pay/(float)toplam-1;
		printf("\n harmonik ortalama: %2.2f",harmonikort);
	} 
