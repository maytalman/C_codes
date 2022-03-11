#include<stdio.h>
#include<conio.h>
	float kombinasyon(int n,int r){
		int carpim1=1,carpim2=1;
		for(int i=0;i<r;i++){
			carpim1=carpim1*(n-i);
		}
		for(int i=r;i>=1;i--){
			carpim2*=i;
		}
		float sonuc=(float)carpim1/carpim2;
		return sonuc;
	}
	int main(){
		int x,y;
		printf("\n\tKombinasyon icin iki sayi giriniz-->");scanf("%d%d",&x,&y);
		printf("\n\tC(%d,%d)= %.2f",x,y,kombinasyon(x,y));
		return 0;

	} 
