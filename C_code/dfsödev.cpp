#include<stdio.h>
#include<stdlib.h>
int array[5][5];
	void readMatris(){//komþuluk matrisini okuma fonksiyonu
		FILE *fp=fopen("komsuluklist.txt","r");
		int x;
		for(int i=0;i<5;i++){
			for(int j=0;j<5;j++){
				fscanf(fp,"%d ",&x);
				array[i][j]=x;
			}
		}
		fclose(fp);
		for(int i=0;i<5;i++){
			for(int j=0;j<5;j++){
				printf("%d ",array[i][j]);
		}
			printf("\n");
	}
}
	int Ideggree(int root,int array[5][5]){//Giriþ derecesini bulmak için sütun numarasýný sabit tutup satýrý ilerletiyorum.
		int deggree=0;
			for(int i=1;i<6;i++){
				if(array[i][root]==1)
				deggree++;//1 gördüðü yerde dereceyi 1 arttýrýyor.
			}
			return deggree;//Derece sayýsýný döndürüyor.
	}
	int Odeggree(int root,int array[5][5]){//Çýkýþ derecesini bulmak için satýr sayýsýný sabit tutup sütun sayýsýný ilerletiyorum.
		int deggree=0;
			for(int i=1;i<6;i++){
				if(array[root][i]==1)
					deggree++;
			}
			return deggree;
	}
	int edgeCount(int array[5][5]){//Graftaki toplam kenar sayýsýný bulmak için matristeki 1'leri sayýyorum.
		int edge=0;
			for(int i=0;i<5;i++){
				for(int j=0;j<5;j++){
					if(array[i][j] == 1)
					edge++;
				}
			}
			return edge;
	}
	int visited[100];//Dolaþabilmek için bir dizi tanýmlýyorum.
	void DFS(int root){
	    visited[root]=1;//Baþlangýç düðümünü ziyaret edildi olarak iþaretliyoruz.
	    printf("%d ", root);//Dolaþýlan düðümlerin çýktýlarýný yazýyorum.
	 
	    for( int i=0;i<5;i++){//Düðüm ziyaret edilmediyse düðümün komþusunu root yapýp tekrar dfs'yi çaðýrýyorum.
	        if(array[root][i] == 1 && visited[i] == false)
	            DFS(i);
	    }
	    
	}
	
		int main(){
			readMatris();//Matrisi okuyorum.
			int x=0,r=0;
			printf("kacinci dugumun giris ve cikis derecesini ogrenmek istiyorsunuz?");scanf("%d",&x);				
			printf("giris derecesi: %d  \ncikis derecesi: %d  \n",Ideggree(x+1,array),Odeggree(x+1,array));
			printf("toplam kenar sayisi: %d \n",edgeCount(array));
			printf("kacinci dugumden dolasmaya baslansin?");scanf("%d",&r);
			DFS(r);
		}
