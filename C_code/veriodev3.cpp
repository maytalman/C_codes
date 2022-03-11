#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
	struct yapi{
		int n;
		char ad[20];
	};
	typedef yapi kullanici;
	kullanici bilgi[4];
	void ilkle(int boyut){
		for(int i=0;i<boyut;i++)
				bilgi[i].n=-1;
	}
	int hash(int k,int size){
		return k%size;
	} 
	
	int *ekle(char *ad,int no,int size){
		int indis=hash(no,size);
				if(bilgi[indis].n==-1){
					bilgi[indis].n=no;
					strcpy(bilgi[indis].ad,ad);		
				}
				else{
					while(bilgi[indis].n!=-1)
						indis++;
							bilgi[indis].n=no;
							strcpy(bilgi[indis].ad,ad);
				}
			
	}
	void arama(int n,int boyut){
		int indis=hash(n,boyut);
		for(int i=0;i<boyut;i++){	
			if(bilgi[indis].n==n){
				printf("bulundu : %s -> %d",bilgi[indis].ad,bilgi[indis].n);
				break;
				}
			else
				printf("bulunamadý");
			}
		}
		int main(){
			int boyut;
			char isimler[boyut][20];
			int numara[boyut];
			printf("boyut girin:");scanf("%d",&boyut);fflush(stdin);
			ilkle(boyut);
				for(int i=0;i<boyut;i++){
					printf("isim: ");scanf("%s",isimler[i]);fflush(stdin);
					printf("no: ");scanf("%d",&numara[i]);
				}
				for(int i=0;i<boyut;i++){
					ekle(isimler[i],numara[i],boyut);
				}
				for(int i=0;i<boyut;i++){
					printf("[%d]. %s->%d\n",i,bilgi[i].ad,bilgi[i].n);
				}
				arama(7,2);
		}
		
