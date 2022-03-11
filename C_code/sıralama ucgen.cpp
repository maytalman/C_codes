#include<stdio.h>
#include<conio.h>
	int main(){
		int dizi[10],kanak;
		for(int i=0;i<3;i++){
			for(int j=i+1;j<i+2;j++){
				if(dizi[i]<dizi[j]){
					kanak=dizi[i];
					dizi[i]=dizi[j];
					dizi[j]=kanak;
				}
				for(int k=0;k<k+2;k++){
					printf("%d",dizi[k]);
				}
				printf("\n");
			}
		}
	}
