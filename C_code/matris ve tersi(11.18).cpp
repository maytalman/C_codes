#include<stdio.h>
#include<conio.h>
	int main(){
		int matris[2][2],capraz1,capraz2,i,j,sonuc,sonuck;
		for(int i=0;i<2;i++){
			for(int j=0;j<2;j++){
				printf("(%d,%d)",i,j);scanf("%d",&matris[i][j]);
			}
		}
		printf("MATRIS:\n");
		for(int i=0;i<2;i++){
			for(int j=0;j<2;j++){
				printf(" %d ",matris[i][j]);
			}
			printf("\n");
		}
		if(i==j){
		capraz1=matris[i][j]*matris[i][j];
	    printf("%d",capraz1);
		}
		else
	 	{
 	    capraz2=matris[i][j]*matris[i][j];
	    printf("%d",capraz2);
		}
		sonuc=capraz1-capraz2;
		sonuc=1/sonuc;
		for(int i=0;i<2;i++){
			for(int j=0;j<2;j++){
				for(int k=1;k<5;k++){
				sonuck=sonuc*matris[i][j];
				matris[i][j]=sonuck;
				printf("%d",matris[i][j]);
			
			}
			printf("\n");
		}
	}	
}
