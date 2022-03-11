#include<stdio.h>
int main(){
	//MATRÝSTEKÝ EN BUYUK SAYI VE KOORDÝNATLARI
		int matris[2][3],enbuyuk=0;
		for(int i=0;i<2;i++){
			for(int j=0;j<3;j++){
				printf("(%d,%d)= ",i,j);scanf("%d",&matris[i][j]);
			}
		}
		for(int i=0;i<2;i++){
			for(int j=0;j<3;j++){
				printf("%d   ",matris[i][j]);
			} printf("\n");
		}
		
		for(int i=0;i<2;i++){
			for(int j=0;j<3;j++){
				if(matris[i][j]>enbuyuk)
				enbuyuk=matris[i][j];
			}
		}
		for(int i=0;i<2;i++){
			for(int j=0;j<3;j++){
				if(matris[i][j]==enbuyuk)
				printf("(%d,%d) koordinatlarinda matrisin en buyuk sayisi vardir.",i,j);
		
		}
	}
	printf(" ve o sayi %d dir.",enbuyuk);
}
	
	
	
	
	
	
}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
