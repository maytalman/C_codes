#include<stdio.h>
	int main(){
		int dizi[10]={8,5,10,11,18,56,45,33,13,22},kanak=0,dizi2[8];
		for(int i=0;i<10;i++){
			for(int j=2;j<dizi[i];j++){
				if(dizi[i]%j==0){
				kanak++;break;
			}
			
			}
		
				if(kanak==0){
				printf("%d\n",dizi[i]);
			}
			kanak=0;
		}
	}
