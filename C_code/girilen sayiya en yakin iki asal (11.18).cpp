#include<stdio.h>
#include<conio.h>
	int main(){
		int sayi,usttenyakini,a,b,alttanyakini;
		printf("sayi giriniz:  ",sayi);
		scanf("%d",&sayi);
		usttenyakini=sayi+1;
		for(int i=2;i<usttenyakini;i++){
			if(usttenyakini%i==0){
				usttenyakini++;
			}
			else
			a=usttenyakini;
		}
		
		alttanyakini=sayi-1;
		for(int i=2;i<alttanyakini;i++){
			if(alttanyakini%i==0){
				alttanyakini--;
			}
			else
			b=alttanyakini;
		}
		printf("en yakin asallar: %d,%d",a,b);
	}
