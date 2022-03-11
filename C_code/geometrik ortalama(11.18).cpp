#include<stdio.h>
#include<conio.h>
#include<math.h>
	int main(){
	int sayi,adet=0,carpim=1;
	float geometrikort,ust;
	do
	{	
		printf("\n sayi giriniz:",sayi);
		scanf("%d",&sayi);
		adet++;
		carpim=carpim*sayi;
	}
	while(sayi>1);
	if(sayi==1)
	{
	printf("girilen sayilarin carpimi : %d",carpim);
	printf("\n yeteri kadar sayi alindi...");
	printf("\n %d adet sayi girildi.",adet-1);

}
	ust=(float)1/(adet-1);
	geometrikort=(float)pow(carpim,ust);
	printf("\n geometrik ortalama:%.2f",geometrikort);
	
}
