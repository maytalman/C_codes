#include<stdio.h>
#include<conio.h>
	int takas(int *x,int *y){
		int gecici;
		gecici=*x;
		*x=*y;
		*y=gecici;
	}
	int is(int dizi[],int x){
		for(int i=0;i<x;i++){
			for(int j=i;j>0 && *(dizi+j)<*(dizi+(j-1));--j)
			takas(&*(dizi+j),&*(dizi+(j-1)));
		}
	}
	int qs(int dizi[],int x, int y){
		int dayanak=*(dizi+y),i=x-1;
			for(int j=x;j<y-1;j++){
				if(*(dizi+j)>=dayanak){
					i++;
					takas(&*(dizi+i),&*(dizi+j));
				}
			}
			takas(&*(dizi+y),&*(dizi+(i+1)));
			return i+1;
	}
	int cagri(int dizi[],int sol,int sag){
		int gelen=0;
			if(sol<sag){
				gelen=qs(&*(dizi),sol,sag);
				qs(&*(dizi),sol,(gelen-1));
				qs(&*(dizi),(gelen-1),sag);
	}
}
							int main(){
								int dizi[10]={11,45,63,74,10,9,3,46,15,4};
								printf("\n\tsiralamadan once dizi : \n");
								for(int i=0;i<10;i++){
									printf("%d  ",*(dizi+i));
								}
								printf("\n\t quick sort siralamadan sonra dizi : \n");
								cagri(&*dizi,0,9);
								for(int i=0;i<10;i++){
									if(i%2==0){
										printf("%d  ",*(dizi+i));
								}
									}	
								printf("\n\t insertion sort siralamadan sonra dizi : \n");
								is(&*dizi,10);
								for(int i=0;i<10;i++){
									if(i%2==1)
										printf("%d  ",*(dizi+i));
								}
							
							
	}
