#include<stdio.h>
#include<conio.h>
	int main(){
		int ogrnotu[20],toplam=0,egrgirecek=0,egrgirmeyecek=0;
		for(int i=0;i<20;i++){
			printf("%d.ogrencinin notu:",i+1);
			scanf("%d",&ogrnotu[i]);
			if(ogrnotu[i]<90 && ogrnotu[i]>30){
				toplam+=ogrnotu[i];
				egrgirecek++;
			}
			else
			egrgirmeyecek++;
			
		}
	float sinifort=toplam/egrgirecek;
	printf("s�n�f ortalamas�:%.2f\n",sinifort);
	printf("egriye girmeyecek ogrenc� sayisi:%d\n",egrgirmeyecek);
	printf("egriye girecek ogrenc� sayisi:%d",egrgirecek);
	
	
	}
