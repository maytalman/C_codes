#include <stdio.h>//bi insan bu formülü kendi kafasından nasıl çıkarabilir? demekki bu olası mümkün birşey...o halde ben neden aklımdan oluşturamıyorum? 
#include <stdlib.h>
#include <conio.h>
	int main(){ 
 	int satir,b,c,d,e; 
	printf("Pascal ucgeni Kac Satir Olsun? = ");scanf("%d",&satir);
	printf("\n");
	for(int b = 0; b <satir; b++){
		c=1;
		for(int d = 0; d <satir-b; d++){
 		printf(" "); 
 		}
 			for(int e = 0; e <= b; e++){
 			printf(" %d ", c); 
 			c = c*(b - e)/(e + 1);
 	}
		printf("\n");
 		}
		
}
