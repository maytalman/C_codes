//ÇALIÞMA KAÐIDI GÝBÝMSÝ
#include<stdio.h>
#include<conio.h>
	/*void hali(int en,int boy){
		for(int i=0;i<=en;i++){
			for(int j=0;j<=boy;j++){
				if((i+j)%2==0)
				printf("%c",219);
				else
				printf("   ");
			}
			printf("\n");
		}
	}
	int main(){
		int en,boy;
		printf("\n\n\tIstediginiz halinin enini boyunu giriniz: ");scanf("%d%d",&en,&boy);
		hali(en,boy);
	} */
	int basamak(int kanak){
		int i=0;
		while(kanak>=0){
		kanak=kanak/10;
		i++;
		}
		//return basamak(kanak);
	}
	int main(){
		int x,kanak;
		printf("\n\t Basamak sayisini bulmak istediginiz sayiyi giriniz-->");scanf("%d",&x);
		printf("\n\t Girdiginiz sayi %d basamaklidir.",basamak(kanak));
		
	}
