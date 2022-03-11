#include<stdio.h>
	int ustyakin(int piyade){
		int usty,x;
		usty=piyade+1;
		for(int i=2;i<usty;i++){
			if(usty%i==0)
			usty++;
			else
			x=usty;
		}
		return x;
	}
	int altyakin(int piyade){
		int alty,y;
		alty=piyade-1;
		for(int i=2;i<piyade;i++){
			if(alty%i==0)
			alty--;
			else
			y=alty;
		}
		return y;
	}
	int main(){
		int milis;
		printf("\n\t bir sayi girin: ");scanf("%d",&milis);
		printf("girdiginiz sayiya en yakin asallar: %d ve %d ",ustyakin(milis),altyakin(milis));
	}
