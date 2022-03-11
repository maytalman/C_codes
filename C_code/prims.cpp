#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#define MELKOR 1000000

int Array[5][5];
 
//Matrisimizi matris.txt dosyasýndan okuyup dizimize aktaran fonksiyon
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
 
//En kýsa yolun indisini geri döndüren yardýmcý fonksiyon. Hocalar burayý sorarlar dikkat edin.
int minKey(int key[], bool visited[])
{
    int min = MELKOR;
    int minIndex, i;
    for( i = 0; i < 5; i++)
    {
        //Eðer bir düðüm ziyaret edilmemiþ ve min deðerinden daha küçükse burayý seçiyoruz.
        if(visited[i] == false && key[i] < min)
        {
            min = key[i];
            minIndex = i;
        }
    }
    //minIndex'i return ediyoruz.
    return minIndex;
}

 
//Asgari tarama aðacýný yazdýran fonksiyon
int printMST(int parent[], int Array[5][5])
{
   int i;
   for (i = 1; i < 5; i++)
      printf("%d - %d    %d \n", parent[i], i, Array[i][parent[i]]);
}
 
//Esas fonksiyon burada, veri yapýmýzý tutan diziyi parametre olarak veriyoruz.
void prims(int Array[5][5]){
    //Genel deðiþkenler
    int i, j, t;
    int key[5];
    int parent[5];
    bool visited[5];
 
    //Tüm düðümleri ziyaret edilmemiþ olarak iþaretleyip, maliyeti sonsuz yapýyoruz.
    for(i = 0; i < 5; i++)
    {
        visited[i] = false;
        key[i] = MELKOR;
    }
 
    //Baþlangýç düðümünü belirliyoruz. Maliyeti sýfýr olur baþlangýç düðümünün. Parentý olmadýðý için -1 veriyoruz.
    key[0] = 0;
    parent[0] = -1;
 
    //5 düðümümüz olduðu için dýþ döngümüz 5 defa dönecek
    for(j = 0; j < 5; j++)
    {
        //En kýsa yolu u deðerine atýyoruz
        int u = minKey(key, visited);
        //Ziyaret edildi olarak iþaretliyoruz.
        visited[u] = true;
 
        //Fonksiyonun can damarý
        for(t = 0; t < 5; t++)
        {
            //Asgari tarama aðacýna en az maliyete sahip ziyaret edilmemiþ düðümü ekliyoruz. Ancak Parent'ý tutmayý unutmuyoruz.
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
