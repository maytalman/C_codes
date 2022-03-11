#include<stdio.h>
#include<conio.h>
#include<time.h>
#include<stdlib.h>
	int main(){
	//ÝKÝ SAYÝNÝN EBOBU
/*		int x,y,kucuksayi,ebob;
		printf("x ve y icin deger giriniz:  ");scanf("%d%d",&x,&y);
		if(x<y){
			kucuksayi=x;
		}
		else if(y<x){
			kucuksayi=y;
		}
		for(int i=2;i<=kucuksayi;i++){
			if(kucuksayi%i==0){
				ebob=i;
			}
		}
		printf("iki sayinin ebobu :%d",ebob);
	*/
	
	//MATRÝSTEKÝ EN BÜYÜK SAYÝ VE KAC KEZ TEKRAR ETTÝÐÝ
	/*int matris[5][5],enbuyuk=0,adet=0;
	for(int i=0;i<5;i++){
		for(int j=0;j<5;j++){
			printf("(%d,%d): ",i,j);scanf("%d",&matris[i][j]);
		}
	}
	for(int i=0;i<5;i++){
		for(int j=0;j<5;j++){
			printf(" %d ",matris[i][j]);
		}
		printf("\n");
	}
	for(int i=0;i<5;i++){
		for(int j=0;j<5;j++){
			if(matris[i][j]>enbuyuk){
				enbuyuk=matris[i][j];
			}
		}
	}	
		for(int i=0;i<5;i++){
			for(int j=0;j<5;j++){
				if(enbuyuk==matris[i][j]){
					adet++;
				}
			}
		
		}
	
		printf("en buyuk sayi:%d\n",enbuyuk);
			printf("en buyuk sayi %d kere tekrar ediyor.",adet);
	*/
//EN YAKIN ÝKÝ ASAL
/*
	int sayi,a,b,alttanyakini,usttenyakini;
	printf("sayi girin:");scanf("%d",&sayi);
	usttenyakini=sayi+1;
	for(int i=2;i<usttenyakini;i++){
		if(usttenyakini%i==0){
			usttenyakini++;
		}
		else
		a=usttenyakini;
	}	
	alttanyakini=sayi-1;
	for(int i=2;i<alttanyakini;i++){
		if(alttanyakini%i==0){
			alttanyakini--;
		}
		else
		b=alttanyakini;
	}
	printf("girilen sayiya en yakin asallar: %d,%d",a,b);
*/	
	int dizi[10],gecici,
	srand(time(NULL));
	printf(">>>dizinin kendisi<<<");
	for(int i=0;i<10;i++){
		dizi[i]=rand()%10;
		printf("%d",dizi[i]);
	}
	for(int i=0;i<10;i++){
		for(int j=i+1;j<10;j++){
			if(dizi[i]>dizi[j]){
				gecici=dizi[i];
				dizi[i]=dizi[j];
				dizi[j]=gecici;
			}
		}
	}
		printf(">>> dizinin kucukten buyuge siralanmis hali<<<");
		for(int j=0;j<10;j++){
			printf(" %d ",dizi[j]);
		}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
		
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	}
