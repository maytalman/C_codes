#include<stdio.h>
	int main(){
		int N[10],a,i=0,fark[10],enkucuk;
		for(int i=0;i<10;i++){
		printf("\n\t %d.eleman: ",i+1);scanf("%d",&N[i]);
	}
		printf("\n\t yakinligini olceceginiz sayiyi girin: ");scanf("%d",&a);
		for(int i=0;i<10;i++){
			if(a<N[i])
			fark[i]=N[i]-a;
			else
		{
		fark[i]=a-N[i];
		}
		printf("%d  ",fark[i]);
		}
		for(int i=0;i<10;i++){
			if(fark[i]>fark[i+1])
			enkucuk=fark[i];
			fark[i]=fark[i+1];
			fark[i+1]=enkucuk;
		}
		printf("\n\t girdiginiz sayiya en yakin dizi elemani %d ",enkucuk);
	}
	/*1 4 7 6 9 6 4 2	3 5
	a=10;
	0=9
	1=6
	2=3
	3=4
	4=1
	5=*/
