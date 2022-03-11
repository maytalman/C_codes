#include<stdio.h>
#include<conio.h>
	int fibonacci(int n){
		if(n==1)
		return 1;
		else if(n==0)
		return 0;
		 int sonuc=fibonacci(n-1)+fibonacci(n-2);
		 return sonuc;
	}
	int main(){
		int sayi;
		printf("sayi girin: ");scanf("%d",&sayi);
		printf("\n%d.fibonacci sayisi= %d",sayi,fibonacci(sayi));
	}
