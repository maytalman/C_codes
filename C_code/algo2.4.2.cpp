#include<stdio.h>
#include<conio.h>
#include<time.h>
#include<stdlib.h>
	int siralabk(int dizi[],int x,int y){
		int i=x-1,dayanak=dizi[y],gecici;
		for(int j=x;j<=y-1;j++){
			if(dizi[j]>=dayanak){
				i++;
				gecici=dizi[i];
				dizi[i]=dizi[j];
				dizi[j]=gecici;
			}
		}
		gecici=dizi[i+1];
		dizi[i+1]=dizi[y];
		dizi[y]=gecici;
		return i+1;
	}
	int siralakb(int dizi[],int x,int y){
		int i=x-1,dayanak=dizi[y],gecici;
		for(int j=x;j<=y-1;j++){
			if(dizi[j]<=dayanak){
				i++;
				gecici=dizi[i];
				dizi[i]=dizi[j];
				dizi[j]=gecici;
			}
		}
		gecici=dizi[i+1];
		dizi[i+1]=dizi[y];
		dizi[y]=gecici;
		return i+1;
	}
	
	int ozcagrikb(int dizi[],int sol,int sag){
		int gelen=0;
		if(sol<sag){
			gelen=siralakb(dizi,sol,sag);
			ozcagrikb(dizi,sol,gelen-1);
			ozcagrikb(dizi,gelen+1,sag);
		}
		
	}
	int ozcagribk(int dizi[],int sol,int sag){
		int gelen=0;
		if(sol<sag){
			gelen=siralabk(dizi,sol,sag);
			ozcagribk(dizi,sol,gelen-1);
			ozcagribk(dizi,gelen+1,sag);
		}
		
	}
	int main(){
		int random[100],ilk[50],son[50],sol,sag,k=0,l=0;
		srand(time(NULL));
		printf("Siralamadan once sayi dizisi:\n ");
		for(int i=0;i<100;i++)
		printf("%d  ",random[i]=0+rand()%100);
			for(int i=0;i<100;i++){
				if(i<50){
						ilk[k]=random[i];
						k++;
				}
				else{
						son[l]=random[i];
						l++;
				}
			}
			printf("\n ilk 50 sayi:\n");
			for(int i=0;i<50;i++){
				printf("%d  ",ilk[i]);
			}
			printf("\n son 50 sayi:\n");
			for(int i=0;i<50;i++){
				printf("%d  ",son[i]);
			}
			printf("\n Dizinin kucukten buyuge siralanmis ilk 50 sayisi:\n");
				ozcagrikb(ilk,0,49);
					for(int i=0;i<50;i++)
					printf("%d  ",ilk[i]);
			printf("\n Dizinin buyukten kucuge siralanmis son 50 sayisi:\n");
				ozcagribk(son,0,49);
					for(int i=0;i<50;i++)
					printf("%d  ",son[i]);
}
