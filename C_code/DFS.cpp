#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
 //DFS
//Dizimizi tuttu�umuz array
int Array[6][6];
//ziyaret edilme durumlar�n� tuttu�umuz array
bool visited[6];
 
//recursice DFS kodu
void DFS(int root, bool visited[])
{
    int i;
    //ba�lang�� d���m�n� ziyaret edildi olarak i�aretliyoruz.
    visited[root] = true;
    printf("%d ", root);
 
    for( i = 0; i < 6; i++)
    {
        //E�er d���m ziyaret edilmediyse her d���m�n kom�usunu 
        //Yeni ba�lang�� noktas�ym�� gibi tekrar �a��r�yoruz
        //��kt�lar� ise yukar�daki print fonksiyonunda al�yoruz.
        if(Array[root][i] == 1 && visited[i] == false)
        {
            DFS(i, visited);
        }
    }
}
 
//matris dosyam�z� okuyup diziye aktaran fonksiyon
void readMatrix()
{
    int i = 0;
    FILE *fp = fopen("matris.txt", "r");
 
    while(fscanf(fp, "%d %d %d %d %d %d",
                 &Array[i][0],
                 &Array[i][1],
                 &Array[i][2],
                 &Array[i][3],
                 &Array[i][4],
                 &Array[i][5]
                 ) != EOF)
    {
        i = i + 1 ;
    }
}
 
 
int main()
{
 
    readMatrix();
    DFS(3, visited);
    return 0;
}
