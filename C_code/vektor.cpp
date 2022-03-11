#include<stdio.h>
	int main(){
		int A[3],B[3],sonuc[3],toplam=0;
		printf("\n\tA(%d,%d,%d)= ",0,0,0);scanf("%d%d%d",&A[0],&A[1],&A[2]);
		printf("\n\tA(%d,%d,%d)=",A[0],A[1],A[2]);
		printf("\n\tB(%d,%d,%d)= ",0,0,0);scanf("%d%d%d",&B[0],&B[1],&B[2]);
		printf("\n\tB(%d,%d,%d)=",B[0],B[1],B[2]);
		for(int i=0;i<3;i++){
			sonuc[i]=A[i]*B[i];
			toplam+=sonuc[i];
		}
		printf("\n\tSKALER CARPIM= %d",toplam);
		
	}
