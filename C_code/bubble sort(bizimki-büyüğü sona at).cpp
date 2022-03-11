#include<stdio.h>
#include<conio.h>
	int main(){
		int dizi[10]={7,9,2,8,3,0,1,4,6,5},gecici;
		for(int i=0;i<10;i++){
			for(int j=i+1;j<10;j++){
				if(dizi[i]>dizi[j]){
					gecici=dizi[i];
					dizi[i]=dizi[j];
					dizi[j]=gecici;
				}
			}
		}
		for(int i=0;i<10;i++){
			printf("%d  ",dizi[i]);
		}
	}
	/*bir hareket 0.indisle baþlar,diðer hareket 1.indisle baþlar 0.<1. ise swap ve 1+1 olur bu sefer 0 ve 2 karþýlaþtýrýlýr i<j denkliði bulunana kadar j++
	denklik bulunursa swap
mesela burda 7 9 2 8 3 0 1 4 6 5 dizisi
			 "0.1.2.3.4.5.6.7.8.9"
			 2 9 7 8 3 0 1 4 6 5 saglandi swap
			 0 9 7 8 3 2 1 4 6 5 swap,bitti
			 0 7 9 8 3 2 1 4 6 5 
			 0 3 9 8 7 2 1 4 6 5 
			 0 2 9 8 7 3 1 4 6 5
			 0 1 9 8 7 3 2 4 6 5
			 0 1 8 9 7 3 2 4 6 5
			 0 1 7 9 8 3 """""""
			 0 1 3 9 8 7 """""""
		     0 1 2 9 8 7 3 4 6 5
			 0 1 2 8 9 7 3 4 6 5
			 0 1 2 7 9 8 3 4 6 5
			 0 1 2 3 9 8 7 4 6 5 
			 0 1 2 3 8 9 7 4 6 5
			 0 1 2 3 7 9 8 4 6 5
			 0 1 2 3 4 9 8 7 6 5
			"0.1.2.3.4.5.6.7.8.9"
			 0 1 2 3 4 8 9 7 6 5
			 0 1 2 3 4 7 9 8 6 5
			 0 1 2 3 4 6 9 8 7 5
			 0 1 2 3 4 5 9 8 7 6
			 0 1 2 3 4 5 8 9 7 6
			 0 1 2 3 4 5 7 9 8 6 
			 0 1 2 3 4 5 6 9 8 7
			 0 1 2 3 4 5 6 8 9 7
			 0 1 2 3 4 5 6 7 9 8
			 0 1 2 3 4 5 6 7 8 9 <<<<<<<< siralandii
i=0;
j=1;
dizi[0]>dizi[1] mi? else j++;
j=2,3,4,5...,9 (0 hicbirinden buyuk olmadigindan j biter i ye doner i++)
dizi[1]>dizi[2] mi?
j=2,3,4,5,6,7,8,9
i++;i=2;
j=3,4,5,6.... ve i++;
i=3;j=4,5,6.... yine i++;
i=4;j=5,6,7... tekrar i++;
i=5;j=6,7,8,9  i++;
i=6;j=7,8,9    i++;
i=7;j=8,9      i++;
i=8;j=9,
*/


