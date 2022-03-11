#include<stdio.h>
#include<conio.h>
	int main(){
	/*
		int matris[3][3],matris2[3][3],toplam=0,matrisc[3][3],matrist[3][3];
		for(int i=0;i<3;i++){
			for(int j=0;j<3;j++){
				printf("(%d,%d)= ",i,j);scanf("%d",&matris[i][j]);
			}
	}
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
		printf("%d  ",matris[i][j]);
		}
			printf("\n");
	}
		for(int i=0;i<3;i++){
			for(int j=0;j<3;j++){
				printf("(%d,%d)= ",i,j);scanf("%d",&matris2[i][j]);
			}
	}
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
		printf("%d  ",matris2[i][j]);
		}
			printf("\n");
	}
		for(int i=0;i<3;i++){
			for(int j=0;j<3;j++){
				for(int k=0;k<3;k++){
					toplam+=matris[i][k]*matris2[k][j];
				}
				matrisc[i][j]=toplam;
				toplam=0;
			}
		}
		printf(">>>>>>>>>>>>>>>>>>>matris carrpim: \n\n");
			for(int i=0;i<3;i++){
				for(int j=0;j<3;j++){
				printf("%d  ",matrisc[i][j]);
		}
			printf("\n");
	}
	for(int j=0;j<3;j++){
		for(int i=0;i<3;i++){
			matrist[i][j]=matris[i][j]+matris2[i][j];
		}
	}
	printf(">>>>>>>>>>>>>>>matrisler toplami : \n\n");
			for(int i=0;i<3;i++){
				for(int j=0;j<3;j++){
				printf("%d  ",matrist[i][j]);
		}
				printf("\n");
	}
	*/

/*
	int matris[3][3],toplam=0,k=0,sutun[3];
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			printf("(%d,%d)= ",i,j);scanf("%d",&matris[i][j]);
		}
	}
		for(int i=0;i<3;i++){
			for(int j=0;j<3;j++){
				printf("%d  ",matris[i][j]);
			}
				printf("\n");
	}
			for(int i=0;i<3;i++){
				for(int j=0;j<3;j++){
				toplam+=matris[j][i];
			}
			sutun[k]=toplam;
			k++;
			toplam=0;
		}
			for(int i=0;i<3;i++)
			printf("%d.sutun toplami: %d\n",i+1,sutun[i]); 	
*/

	/*
		int matris[3][3],maks=0,k,t;
		for(int i=0;i<3;i++){
			for(int j=0;j<3;j++){
				printf("(%d,%d)= ",i,j);scanf("%d",&matris[i][j]);
			}
		}
			for(int i=0;i<3;i++){
				for(int j=0;j<3;j++){
				printf("%d  ",matris[i][j]);
		}
			printf("\n");
	}
		for(int i=0;i<3;i++){
			for(int j=0;j<3;j++){
				if(maks<matris[i][j]){
					maks=matris[i][j];
					k=i;t=j;
				}
			}
		}			
		printf("matristeki en büyük eleman %d ; %d,%d koordinatlarýnda",maks,k,t);
		*/
		int matris[3][3],maks=0,tekrar=0;
		for(int i=0;i<3;i++){
			for(int j=0;j<3;j++){
				printf("(%d,%d)= ",i,j);scanf("%d",&matris[i][j]);
			}
		}
			for(int i=0;i<3;i++){
				for(int j=0;j<3;j++){
				printf("%d  ",matris[i][j]);
			}
			printf("\n");
	}
		for(int i=0;i<3;i++){
			for(int j=0;j<3;j++){
				if(maks<matris[i][j])
				maks=matris[i][j];
			}
		}
		for(int i=0;i<3;i++){
			for(int j=0;j<3;j++)
			if(matris[i][j]==maks)
			tekrar++;
		}
		printf("en buyuk sayi %d; %d kez tekrar ediyor.",maks,tekrar);
		
}
	
