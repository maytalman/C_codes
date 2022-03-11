//BÝR ÇEÞÝT MÜLAKAT BÝG BANG KONULU 
#include<stdio.h>
#include<conio.h>
#include<string.h>
	int main(){
		char ad[15],soyad[15],dogru_c[20]="FRED HOYLE",dogru_c2[20]="COBE",dogru_c3[20]="BATLAMYUS",kullanici_c[20],kullanici_c2[20],kullanici_c3[20];
		int dizi[3],adet_d=0,adet_y=0;
		printf("\t\tAdiniz-->");gets(ad);
		printf("\t\tSoyadiniz-->");gets(soyad);
		printf("\n\t\tHosgeldin %s hazirsan sorularimiza gecelim",ad);
		printf("\n\t\tSorularimiza gecmeden once cevaplarinizi buyuk harflerle yazmayi unutmayin.");
		printf("\n\t\t1->Big bang karsiti olmasina ragmen ispatlanmasina yardimci olan bilim insani kimdir?");gets(kullanici_c);
		if(strcmp(kullanici_c,dogru_c)==0){
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
		}adet_d++;
   	}
   		else
   	{	printf("\n\t\t\t\t\t\t\t\t\t\t\t\t");
	   	for(int i=0;i<4;i++)
		printf("* ");
   		adet_y++;
    }
   		printf("\n\t\t2->Kozmik fon radyosunundaki dalgalanmalari bulmak icin gönderilen uydunun ismi nedir?");gets(kullanici_c2);
   		if(strcmp(dogru_c2,kullanici_c2)==0){
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
		}adet_d++;
   	}
   		else{
   		printf("\n\t\t\t\t\t\t\t\t\t\t\t\t");
   		for(int i=0;i<4;i++)
   			printf("* ");
   		adet_y++;
   }
   		printf("\n\t\t3->Dunya merkezli evren modelini hangi bilim insani ortaya atmistir?");gets(kullanici_c3);
		if(strcmp(dogru_c3,kullanici_c3)==0){
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
		}adet_d++;
   	}
   		else
   	{	printf("\n\t\t\t\t\t\t\t\t\t\t\t\t");
	   	for(int i=0;i<4;i++)
		printf("* ");
   		adet_y++;
	}
			if(adet_d>=2)
			printf("\n\n>>>>>>>TEBRIKLER %s ISE ALINDINIZ<<<<<<<",ad);
			else
			printf("\n\n>>>>>>>MAALESEF %s BASVURUDA BASARISIZ OLDUNUZ<<<<<<",ad);
		
		
		
		
		
		
		
		
		
		
		   }
		   
	

		
		

