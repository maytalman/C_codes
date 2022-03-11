#include<stdio.h>
#include<conio.h>
	int usal(int taban,int us){
	if(us==0)
	return 1;
	else{
		return taban* usal(taban,us-1);
	}
}
	int main(){	
		int sayi,sayi2;
		printf("\t taban: ");scanf("%d",&sayi);
		printf("\t us: ");scanf("%d",&sayi2);
		printf("\t %d^%d= %d",sayi,sayi2,usal(sayi,sayi2));
	}
	
	
