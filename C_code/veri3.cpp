#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define SIZE 4
	typedef struct bilgi{
		int n;
	}kullanici;
	kullanici tablo[SIZE];
		int hash(int n){
			return n%4;
		}
		int ekle(int n){
			int indis=hash(n);
			if(tablo[indis].n==-1){
			tablo[indis].n=n;
		}
			else{
				while(tablo[indis].n!=-1) 
					indis++;
						tablo[indis].n=n;					
			}
	}
	
		void arama(int n){
			int indis=hash(n);
			for(int i=0;i<SIZE;i++){
				if(tablo[indis].n==n){
					printf("bulundu -> %d",tablo[indis].n);
					break;
				}
				else
					printf("bulunamadý");
			}
		}
			int main(){
				int size=4,no;
				for(int i=0;i<size;i++){
					tablo[i].n=-1;
				}
					for(int i=0;i<size;i++){
						printf("no:\n");scanf("%d",&no);
						ekle(no);
					}
					for(int i=0;i<4;i++){
						printf("\t\t%d.%d\n",i,tablo[i].n);
					}
					arama(5);
					
				
			}
