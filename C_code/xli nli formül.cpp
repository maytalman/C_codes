#include<stdio.h>
#include<math.h>
	int main(){
		int payda=1,x,n;
		float birim=0.0;
		printf("x ve n icin sayi:");scanf("%d%d",&x,&n);
		for(int k=1;k<=n;k++){
			for(int i=k;i>=1;i--){
			payda*=i;		
			}
			birim=(float)(pow(x,k)/payda)+birim;
			payda=1;	
		}
		
				printf("(x,n):\n(%d,%d)=X+X^2/2!+X^3/3!+....+X^n/n!= %2.2f",x,n,birim);
				
		}
		
