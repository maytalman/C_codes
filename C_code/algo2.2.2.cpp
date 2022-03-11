#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<time.h>
	int main(){
		FILE*ceykil,*mistisi,*tum;
		ceykil=fopen("sayilar_0.txt","w");
		mistisi=fopen("sayilar_1.txt","w");
		tum=fopen("tum.txt","w");
		srand(time(NULL));
		int dizi[100],b=sizeof(int)*2-1,c=0,d=0;
		for(int i=0;i<100;i++){
			fprintf(tum,"%d\n",dizi[i]=0+rand()%100);
		}
		for(int i=0;i<100;i++){
			if(dizi[i]&1<<5){
				c++;
				dizi[i]&=~(1<<3);
					for(int j=b;j>0;--j){
						if(dizi[i]&1<<j)
							fprintf(mistisi,"1");
						else
							fprintf(mistisi,"0");
						}
						fprintf(mistisi,"\n");
						
			}
			else{
			d++;
			dizi[i]|=1<<4;
					for(int j=b;j>0;--j){
						if(dizi[i]&1<<j)
							fprintf(ceykil,"1");
						else
							fprintf(ceykil,"0");
						}
						fprintf(ceykil,"\n");
					}		
		}
		fprintf(ceykil,"\n%d tane 5.biti 0 olan ve 4.biti 1 yapilan sayi var",d);
		fprintf(mistisi,"\n%d tane 5.biti 1 olan ve 3.biti 0 yapilan sayi var",c);
	}
