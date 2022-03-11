#include<stdio.h>
#include<conio.h>
	int main(){
		int dizi[10],kanak,buyuk,k=0;
		printf(">>>>DIZININ ILK HALI<<<<\n");
		for(int i=0;i<10;i++){
		printf("sayi girin--->");scanf("%d",&dizi[i]);
	 	}
	 	for(int i=0;i<10;i++){
		 	printf("%d",dizi[i]);
		 }
	printf("\n");
	for(int i=0;i<k+2;i++){
		for(int j=i+1;j<k+2;j++){
			for(int k=0;k<10;k++){
			if(dizi[i]>dizi[j]){
		kanak=dizi[i];
		dizi[i]=dizi[j];
		dizi[j]=kanak;				
			}
			else
			printf("%d ",dizi[j-1]);	
		} 
	}
		printf("\n");
	}
/*	printf("\n >>>>KUCUKTEN BUYUGE SIRALANMIS HALI<<<<\n\n");
	for(int i=0;i<10;i++){
		printf("%d",dizi[i]);
	}*/
	printf("\nucgenli hali \n\n");
	for(int i=1;i<10;i++){
		for(int j=0;j<=i;j++){
		printf(" %d ",dizi[k]);
		k++;
		}
	k=0;printf("\n ");
	}
	
		
	
	
	
	
	
	
	
	
	
}
