#include<stdio.h>
	void siralama(int dizi[10]){
		int gecici;
		for(int i=0;i<10;i++){
			for(int j=i+1;j<10;j++){
				if(dizi[i]>dizi[j]){
					gecici=dizi[i];
					dizi[i]=dizi[j];
					dizi[j]=gecici;
				}
			}
		}
		for(int i=0;i<10;i++){
	printf("%d\t",dizi[i]);		
		}
	}
	int main(){
		int dizi2[10];
		for(int i=0;i<10;i++){
		printf("sayi girin:  ");scanf("%d",&dizi2[i]);			
		}
		siralama(dizi2);
		}
	
