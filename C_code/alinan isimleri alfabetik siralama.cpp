#include<stdio.h>
#include<string.h>
	struct bbuyuk{
		char isim[10];
	}isimler[3];
	int main(){
		char gecici[10];
		for(int i=0;i<3;i++){
			printf("\t%d.isim: ",i+1);scanf("%s",isimler[i].isim);
		}
		for(int i=0;i<3;i++){
			if(isimler[i].isim[0]>='a'&&isimler[i].isim[0]<='z')
			isimler[i].isim[0]=isimler[i].isim[0]-32;
		}
			for(int i=0;i<3;i++){
			printf("\n\t%d.ismin yeni hali: %s ",i+1,isimler[i].isim);
		}
		for(int i=0;i<2;i++){
			for(int k=i+1;k<3;k++){
				if(isimler[i].isim[0]>isimler[k].isim[0]){
				strcpy(gecici,isimler[i].isim);
				strcpy(isimler[i].isim,isimler[k].isim);
				strcpy(isimler[k].isim,gecici);
				}
				   if(isimler[i].isim[i]==isimler[k].isim[i]){
						if(isimler[i].isim[i+1]>isimler[k].isim[i+1]){
							strcpy(gecici,isimler[i].isim);
							strcpy(isimler[i].isim,isimler[k].isim);
							strcpy(isimler[k].isim,gecici);
							}
						}
					}
				}
		printf("\n\n\talfabetik sirali hali-->\n");
			for(int i=0;i<3;i++){
				printf("\n\t%d.isim: %s",i+1,isimler[i].isim);
			}
	}
