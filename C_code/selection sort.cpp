#include<stdio.h>
#include<conio.h>
	int main(){
		int dizi[10]={8,5,2,6,7,9,3,4,0,1},min,gecici;
		for(int i=0;i<10;i++){
			min=i;
			for(int j=i+1;j<10;j++){
				if(dizi[j]<dizi[min]){
				min=j;
			}
			}
			gecici=dizi[i];
			dizi[i]=dizi[min];
			dizi[min]=gecici;
		}
		for(int i=0;i<10;i++){
			printf("%d  ",dizi[i]);
		}
		
	} 
	/*
burada yap�lan basta dizinin 0.indisine minimum deyip onu dizideki di�er elemanlarla kar��la�t�rmak.ki 0. indis eleman�ndan
daha k�����n� bulursa minimuma at�yor.Yani ba�ta en k����� se�ip daha sonra kalanlar�n i�inden k�����n� kalanlar�n i�inden k�����n� se�erek s�ralam�� oluyor.	
	*/
