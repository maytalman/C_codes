#include<stdio.h>
#include<conio.h>
	int main(){
		int dizi[47],a;
		dizi[0]=0;
		dizi[1]=1;
		for(int i=0;i<47;i++){
			dizi[i+2]=dizi[i+1]+dizi[i];
		printf(" %d ",dizi[i]);
		}
		printf("\t\nhangi degeri istiyorsunuz?");scanf("%d",&a);
		printf("\t\t>>>%d<<<",dizi[a]);
		
	}
