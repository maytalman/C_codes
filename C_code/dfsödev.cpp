#include<stdio.h>
#include<stdlib.h>
int array[5][5];
	void readMatris(){//kom�uluk matrisini okuma fonksiyonu
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
	int Ideggree(int root,int array[5][5]){//Giri� derecesini bulmak i�in s�tun numaras�n� sabit tutup sat�r� ilerletiyorum.
		int deggree=0;
			for(int i=1;i<6;i++){
				if(array[i][root]==1)
				deggree++;//1 g�rd��� yerde dereceyi 1 artt�r�yor.
			}
			return deggree;//Derece say�s�n� d�nd�r�yor.
	}
	int Odeggree(int root,int array[5][5]){//��k�� derecesini bulmak i�in sat�r say�s�n� sabit tutup s�tun say�s�n� ilerletiyorum.
		int deggree=0;
			for(int i=1;i<6;i++){
				if(array[root][i]==1)
					deggree++;
			}
			return deggree;
	}
	int edgeCount(int array[5][5]){//Graftaki toplam kenar say�s�n� bulmak i�in matristeki 1'leri say�yorum.
		int edge=0;
			for(int i=0;i<5;i++){
				for(int j=0;j<5;j++){
					if(array[i][j] == 1)
					edge++;
				}
			}
			return edge;
	}
	int visited[100];//Dola�abilmek i�in bir dizi tan�ml�yorum.
	void DFS(int root){
	    visited[root]=1;//Ba�lang�� d���m�n� ziyaret edildi olarak i�aretliyoruz.
	    printf("%d ", root);//Dola��lan d���mlerin ��kt�lar�n� yaz�yorum.
	 
	    for( int i=0;i<5;i++){//D���m ziyaret edilmediyse d���m�n kom�usunu root yap�p tekrar dfs'yi �a��r�yorum.
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
