//YAPMAK ÝSTEDÝÐÝM ÝÞE ALIM MÜLAKATI TARZINDA 3 SORULUK BÝR FORM...
#include<stdio.h>
#include<conio.h>
#include<string.h>
	int main(){
		char soru[20]="FRED HOYLE",kullanici_c[20],soru2[20]="COBE",kullanici_c2[20],soru3[20]="BATLAMYUS",kullanici_c3[20],kullanici[20],soyad[20];
		int adet_d=0,adet_y=0,dizi[3];
		printf("\tAdiniz --->");gets(kullanici);printf("\tSoyadiniz--->");gets(soyad);
		printf("\tHosgeldin %s,sana birkac sorumuz olacak...\n",kullanici);
		printf("\tSorularimizdan once cevaplari buyuk harflerle girmeni rica ediyoruz\n");
		printf("\t1->Big Bang teorisine karsi ciktigi halde ispatlanmasinda emegi gecen bilim insani kimdir?");gets(kullanici_c);
		if(strcmp(soru,kullanici_c)==0){
			adet_d++;
		printf("\n\t\t\t\t\t\t\t\t\t\t\t");
		for(int i=0;i<3;i++){
			if(i==1){
				printf("   * ",dizi[i]);
			}
			else
			printf(" ",dizi[i]);
			}	
		printf("\n\t\t\t\t\t\t\t\t\t\t\t");
		for(int i=0;i<3;i++){
			printf(" * ",dizi[i]);
		}
		printf("\n\t\t\t\t\t\t\t\t\t\t\t");
		for(int i=0;i<3;i++){
			if(i==1){
			printf("   * ",dizi[i]);
			}
			else
			printf(" ",dizi[i]);
		}
}
		else if(strcmp(soru2,kullanici_c2)!=0){
		printf("\nYANLIS CEVAP!");
		adet_y++;
		}
		printf("\n\n\t2->Kozmik fon radyasyonundaki dalgalanmalari bulmak icin gönderilen uydunun ismi nedir?");gets(kullanici_c2);
		if(strcmp(soru2,kullanici_c2)==0){
		adet_d++;
		printf("\n\t\t\t\t\t\t\t\t\t\t\t");
		for(int i=0;i<3;i++){
			if(i==1)
			printf("   * ",dizi[i]);
			else
			printf(" ",dizi[i]);
		}
		printf("\n");
		for(int i=0;i<3;i++){
		printf("   * ",dizi[i]);
	}
		printf("\n");
		for(int i=0;i<3;i++){
			if(i==1)
			printf("   * ",dizi[i]);
			else
			printf(" ",dizi[i]);
		}
		
		}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
