#include<stdio.h>
#include<conio.h>
	int bilmemkacinciasal(int n){
		int kanak=0,kontrol=0;
		for(int i=2; ;i++){
			kontrol=0;
				for(int j=2;j<i;j++){
					if((i%j)==0)
					kontrol++;
				}
		
		if(kontrol==0)
		kanak++;
			if(n==kanak){
				return i;
			}
	}
}
	int main(){
		int kacinci;
		printf("kacinci asali istiyorsunuz?");scanf("%d",&kacinci);
		printf("\n %d.asal= %d",kacinci,bilmemkacinciasal(kacinci));
	}
