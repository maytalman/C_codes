#include<stdio.h>
#include<conio.h>
main(){
	int sayi,sayac=0;
	printf("sayi girin:");
	scanf("%d",&sayi);
	for(int k=2;k<sayi;k++)
	{
		if(sayi%k==0) 
    {         
		sayac++;
	}
	}
		if(sayac==0){
		printf("sayi asal");}
		else 
	{
		printf("sayi asal degil");
	}
	
	
	
}
