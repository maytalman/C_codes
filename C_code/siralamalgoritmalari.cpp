#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<time.h>
	int *secerek(int dizi[],int x){
		int min,gecici;
		for(int i=0;i<x;i++){
			min=i;
				for(int j=i+1;j<x;j++){
					if(dizi[j]<dizi[min])
					min=j;
				}
				gecici=dizi[i];
				dizi[i]=dizi[min];
				dizi[min]=gecici;
		}
	}
	int *ekleyerek(int dizi[],int x){
		int gecici;
		for(int i=1;i<=x;i++){
			for(int j=i;j>0 && dizi[j]<dizi[j-1];j--){
				gecici=dizi[j];
				dizi[j]=dizi[j-1];
				dizi[j-1]=gecici;
			}
		}
	}
	int hizli(int dizi[],int x,int y){
		int i=x-1,gecici,dayanak=dizi[y];
		for(int j=x;j<y-1;j++){
			if(dizi[j]<=dayanak){
				i++;
				gecici=dizi[i];
				dizi[i]=dizi[j];
				dizi[j]=gecici;
			}
		}
		gecici=dizi[y];
		dizi[y]=dizi[i+1];
		dizi[i+1]=gecici;
		return i+1;
	}
	int ozcagri(int dizi[],int sol,int sag){
		int gelen=0;
		if(sol<sag){
			gelen=hizli(dizi,sol,sag);
			ozcagri(dizi,sol,gelen-1);
			ozcagri(dizi,gelen-1,sag);
		}
	}
	int kabarcik(int dizi[],int x){
		int gecici;
		for(int i=0;i<x;i++){
			for(int j=i+1;j<x;j++){
				if(dizi[i]>dizi[j]){
					gecici=dizi[i];
					dizi[i]=dizi[j];
					dizi[j]=gecici;
				}
			}
		}
	}
	int main(){
		
	}
	
