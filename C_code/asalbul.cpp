#include<stdio.h>
#include<conio.h>
	int ab(int x){
	int k=0,kanak=0;
		for(int i=2; ; i++){
			kanak=0;
				for(int j=2;j<i;j++){
					if(i%j==0)
					kanak++;
				}
				if(kanak==0)
				k++;
				if(k==x)
				return i;
		}
	}
	int main(){
		int a;
		printf("kacinci asal :");scanf("%d",&a);
		printf(" %d ",ab(a));
	}
	
