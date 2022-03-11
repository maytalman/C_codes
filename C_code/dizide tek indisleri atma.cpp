#include<stdio.h>
int main(){
	int dizi[10],tekler[6],j=0;
	for(int i=0;i<10;i++){
		printf("\nsayi girin: ");scanf("%d",&dizi[i]);
	}
	for(int i=0;i<10;i++){
		if(i%2!=0){
			tekler[j]=dizi[i];
			j++;
		}
	}
	printf("\n>>>>>>>>>>>>>>>>>>>>>>\n");
	for(int j=0;j<5;j++){
		printf("%d\t",tekler[j]);
	}
}
