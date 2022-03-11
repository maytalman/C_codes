
#include<stdio.h>
#include<conio.h>
#include<math.h>
/*	 main(){
	char st;
	printf("bir karakter giriniz:");
	st=getche();
	printf("ASCII:%c\n",st);
	printf("DESIMALL:%d\n",st);
	
}
*/
	int main(){
		int dizi[8],sonuc=0;
		printf(">>BINARY SAYI<<");
		for(int i=0;i<8;i++){
			printf("\n1 veya 0 giriniz:");scanf("%d",&dizi[i]);
		}	
		for(int i=0;i<7;i++){
		printf("%d",dizi[i]);
}
		for(int i=0;i<7;i++){
			sonuc+=dizi[i]*pow(2,i);
					}
		printf("\nDESIMALL:%d",sonuc);
	}
