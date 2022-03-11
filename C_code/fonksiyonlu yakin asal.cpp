#include<stdio.h>
	struct yakin{
		int x,y;
	}a;
	int yakinbul(int piyade){
		int alty,usty,x,y,dizi[2];
		alty=piyade-1;
		for(int i=2;i<alty;i++){
			if(alty%i==0)
			alty--;		
			else
			a.x=alty;
		}
		
		usty=piyade+1;
		for(int j=2;j<usty;j++){
			if(usty%j==0)
			usty++;
			else
			a.y=usty;
		}
			struct yakin a;
			return a;
	}
	int main(){
		int milis;
		printf("sayi girin: ");scanf("%d",&milis);
		printf("en yakin asallar: %d,%d",yakinbul(milis));
	}
