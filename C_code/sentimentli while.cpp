/*#include<stdio.h>
#include<conio.h>
main(){
int girilen=0,eb=0;
while(girilen!=1)
{
	printf("girilen sayi:");
	scanf("%d",&girilen);
	if(girilen>eb)
	eb=girilen;
	}
printf("eb:%d",eb);
}
Yýldýz çizme tahtasý çizme.*/
#include <stdio.h>
#include <conio.h>
int main(){
    for (int i=1;i<=5;i++){
		for (int j=1;j<=5;j++){
			if ((i+j)==6||i==j)  printf("*"); else printf(" ");
		}
        printf("\n");
	}	      	
	getch();
}

