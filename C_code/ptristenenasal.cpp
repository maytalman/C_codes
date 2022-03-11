#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
	int main(){
		int *asal,a,t=0,kanak=0,istenen;
		asal=(int *)malloc(5*sizeof(int));
		asal=(int *)realloc(asal,sizeof(int));
		printf("\n\tkacinci asali istiyorsunuz?");scanf("%d",&a);
			for(int i=2; ;i++){
				kanak=0;
				for(int j=2;j<i;j++){
					if(i%j==0)
					kanak++;
				}
						if(kanak==0){
						*(asal+t)=i;
						t++;
						}
								if(t==a){
								istenen=*(asal+t-1);
								break;
							}
			}
				printf("\n\t%d",istenen);
	}
