#include<stdio.h>
#include<conio.h>

main(){
	int a=1,b;
	printf("b icin deger girin...");
	scanf("%d",&b);
	int flag=0;
	while(a=b){
	a++;
	if(b%a==0)
	flag=1;
	break;
}
	if(flag==0)
	printf("sayi asaldir...")
	else
	printf("sayi asal degildir...");
	
}

