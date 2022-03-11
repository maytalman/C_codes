#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#define MELKOR 1000000

int Array[5][5];
 
//Matrisimizi matris.txt dosyas�ndan okuyup dizimize aktaran fonksiyon
void readMatrix()
{
    int i = 0;
    FILE *fp = fopen("matris.txt", "r");
 
    while(fscanf(fp, "%d %d %d %d %d",
                 &Array[i][0],
                 &Array[i][1],
                 &Array[i][2],
                 &Array[i][3],
                 &Array[i][4]
                 ) != EOF)
    {
        i = i + 1 ;
    }
}
 
//En k�sa yolun indisini geri d�nd�ren yard�mc� fonksiyon. Hocalar buray� sorarlar dikkat edin.
int minKey(int key[], bool visited[])
{
    int min = MELKOR;
    int minIndex, i;
    for( i = 0; i < 5; i++)
    {
        //E�er bir d���m ziyaret edilmemi� ve min de�erinden daha k���kse buray� se�iyoruz.
        if(visited[i] == false && key[i] < min)
        {
            min = key[i];
            minIndex = i;
        }
    }
    //minIndex'i return ediyoruz.
    return minIndex;
}

 
//Asgari tarama a�ac�n� yazd�ran fonksiyon
int printMST(int parent[], int Array[5][5])
{
   int i;
   for (i = 1; i < 5; i++)
      printf("%d - %d    %d \n", parent[i], i, Array[i][parent[i]]);
}
 
//Esas fonksiyon burada, veri yap�m�z� tutan diziyi parametre olarak veriyoruz.
void prims(int Array[5][5]){
    //Genel de�i�kenler
    int i, j, t;
    int key[5];
    int parent[5];
    bool visited[5];
 
    //T�m d���mleri ziyaret edilmemi� olarak i�aretleyip, maliyeti sonsuz yap�yoruz.
    for(i = 0; i < 5; i++)
    {
        visited[i] = false;
        key[i] = MELKOR;
    }
 
    //Ba�lang�� d���m�n� belirliyoruz. Maliyeti s�f�r olur ba�lang�� d���m�n�n. Parent� olmad��� i�in -1 veriyoruz.
    key[0] = 0;
    parent[0] = -1;
 
    //5 d���m�m�z oldu�u i�in d�� d�ng�m�z 5 defa d�necek
    for(j = 0; j < 5; j++)
    {
        //En k�sa yolu u de�erine at�yoruz
        int u = minKey(key, visited);
        //Ziyaret edildi olarak i�aretliyoruz.
        visited[u] = true;
 
        //Fonksiyonun can damar�
        for(t = 0; t < 5; t++)
        {
            //Asgari tarama a�ac�na en az maliyete sahip ziyaret edilmemi� d���m� ekliyoruz. Ancak Parent'� tutmay� unutmuyoruz.
            if(Array[u][t] && visited[t] == false && Array[u][t] < key[t])
            {
                key[t] = Array[u][t];
                parent[t] = u;
            }
        }
    }
    printMST(parent, Array);
 
}
 
int main()
{
    readMatrix();
    prims(Array);
}
