#include<stdio.h>
#include<conio.h>

int main(){
	int sayi,kontrol=0,i;
	printf("sayi girin:");scanf("%d",&sayi);
	for(int i=2;i<sayi;i++){
		for(int j=2;j<i+1;j++){
	if(i%j==0){
	kontrol=1;
//	break;
	}
	else
	kontrol=0;
}
	if(i==2)
	kontrol=0;
		
	}
	if(kontrol==0){
		printf("%d",i);
	}
	
}

