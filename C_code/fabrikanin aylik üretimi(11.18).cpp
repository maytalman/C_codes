o#include<stdio.h>
#include<conio.h>
	int main(){
	int toplam=0,sinir=10,kazanc,uretim[12],zararedilen=0;
	for(int i=0;i<12;i++){
		printf("%d.ayin uretim miktari:",i+1);
		scanf("%d\t",&uretim[i]);
			if(uretim[i]>10){
				toplam+=uretim[i];
			}
			else
			{
			zararedilen++;
		}
			
	}

	float ortalama=toplam/12;
	printf("aylik üretim ortalamaniz:%.2f",ortalama);
	printf("\n %d ay uretiminiz sinir alti kalmistir...", zararedilen);
	printf("\n 1.ay uretimi %d",uretim[0]);//kontrol amaçlý yapýldý...
	
}
