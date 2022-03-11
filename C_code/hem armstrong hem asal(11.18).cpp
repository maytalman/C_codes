#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
	int main(){
		int kanak=0,a,kup,sayi,dizi[5],son[4];
		printf(">>ARMSTRONG SAYILAR<<");
		for(int i=1;i<=9;i++){
			for(int j=0;j<=9;j++){
				for(int k=0;k<=9;k++){
					kup=(i*i*i)+(j*j*j)+(k*k*k);
					sayi=(100*i)+(10*j)+k;	
				if(sayi==kup){
					dizi[a]=sayi;
					printf("  %d  ",dizi[a]);
			}
		}
	}
			 
	}
		for(int a=0;a<5;a++){
		for(int i=2;i<dizi[a];i++){
			if(dizi[a]%i==0){
			kanak=1;
			break;
			}
			else
			kanak=0;
}
		}	
		if(kanak==0){
			printf("\n hem armstrong hem asal sayilar:%d",dizi[a]);
		}
		
	   else
   	   printf("\n armstrong ve asal olan sayi bulunamadi...");
}
