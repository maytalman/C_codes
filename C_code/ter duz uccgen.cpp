#include<stdio.h>
#include<conio.h>
	int main(){
		int i,j;
		for(int i=0;i<10;i++){
			for(int j=0;j<i+1;j++){
				printf("%d ",j);
			}
		printf("\n");
		}
		printf("\t\t");{
		for(int i=9;i<19;i++){
			for(int j=i;j<19;j++){
				printf("# ");
			}
			printf("\n");
		}
	}
}		/*int satir,sutun;
		printf("\t");
		for(int satir=0;satir<10;satir++){
			for(int sutun=satir+1;sutun<10;sutun++){
				printf("# ");
			}
			printf("\n");
			printf("\t");
		}*/
