#include<stdio.h>
	int ekokbul(int top,int tufek){
		int dizito[10],dizitu[10],ekok,k=0,m=0;
		for(int i=1;i<=10;i++){
			dizito[k]=i*top;
			k++;
		}
		for(int j=1;j<=10;j++){
			dizitu[j]=j*tufek;
			m++;
		}
		for(int i=0;i<10;i++){
			if(dizito[i]==dizitu[i])
			ekok=dizito[i];
		}
		return ekok;
	}
	int main(){
		int x,y;
		printf("iki sayi girin: ");scanf("%d%d",&x,&y);
		printf(" ekoklari : %d",ekokbul(x,y));
	}
